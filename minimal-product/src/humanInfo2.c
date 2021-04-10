#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int age;
    int sex;
    char name[64];
} human;

void enter_person_profile(human*, int*, int*);
void show_person_profile(human*);

int main()
{
    /* 人数分の入力関数と出力関数を実行 */
    int i;
    int num_of_ppl = 1, finishf = 0;
    human *persons;
    persons = (human *)malloc(sizeof(human) * num_of_ppl);

    int persons_size = sizeof(persons) / sizeof(persons[0]);
    for(i = 0; finishf == 0; i++){
        enter_person_profile(&persons[i], &finishf, &num_of_ppl);
        if(finishf == 0){
            persons = realloc(persons, sizeof(human) * num_of_ppl);
        }
    }
    for(i = 0; i < num_of_ppl - 1; i++){
        show_person_profile(&persons[i]);
    }
    free(persons);
    return 0;
}

void enter_person_profile(human *pperson, int *finishf, int *num_of_ppl)
{
    /* 入力ブロック */
    printf("年齢を入力(-1で終了) : ");
    scanf("%d", &pperson->age);
    if(pperson->age == -1){
        *finishf = 1;
        return;
    }

    /* 入力ブロック */
    printf("性別を入力[男性->1,女性->2] : ");
    scanf("%d", &pperson->sex);
    printf("名前を入力 : ");
    scanf("%s", pperson->name);
    *num_of_ppl += 1;
}

void show_person_profile(human *pperson)
{
    /* 出力ブロック */
    char psex[64];
    if(pperson->sex == 1) {
        strcpy(psex, "man");
    } else {
        strcpy(psex,"female");
    }
    printf("年齢->%d\n", pperson->age);
    printf("性別->%s\n", psex);
    printf("名前->%s\n", pperson->name);
}
