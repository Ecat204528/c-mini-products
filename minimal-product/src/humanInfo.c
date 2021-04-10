#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    int sex;
    char name[64];
} human;

void person_profile_input(human *pperson);
void person_profile_show(human *pperson);

int main()
{
    /* 人数分の入力関数と出力関数を実行 */
    int i;
    human person1, person2, person3;
    human persons[] = {person1,person2,person3};
    int persons_size = sizeof(persons) / sizeof(persons[0]);
    for(i = 0; i < persons_size; i++){
        person_profile_input(&persons[i]);
    }
    for(i = 0; i < persons_size; i++){
        person_profile_show(&persons[i]);
    }
    return 0;
}

void person_profile_input(human *pperson)
{
        /* 入力ブロック */
    printf("年齢を入力 : ");
    scanf("%d", &pperson->age);
    printf("性別を入力[男性->1,女性->2] : ");
    scanf("%d", &pperson->sex);
    printf("名前を入力 : ");
    scanf("%s", pperson->name);
}

void person_profile_show(human *pperson)
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