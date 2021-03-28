#include <stdio.h>
#include <string.h>

struct student {
  int number;
  char name[64];
  int score;
};

int main(void)
{
  FILE *fp;
  fp = fopen("tmp.csv","w");

  struct student Nobita,Shizuka,Takeshi,Suneo;
  Nobita.number = 1;
  strcpy(Nobita.name, "NobiNobita");
  Nobita.score = 0;
  Shizuka.number = 2;
  strcpy(Shizuka.name, "MinamotoShizuka");
  Shizuka.score = 90;
  Takeshi.number = 3;
  strcpy(Takeshi.name, "GoudaTakashi");
  Takeshi.score = 40;
  Suneo.number = 4;
  strcpy(Suneo.name, "HonekawaSuneo");
  Suneo.score = 70;
  
  fprintf(fp,"number,name,score\r\n%d,%s,%d\r\n%d,%s,%d\r\n%d,%s,%d\r\n%d,%s,%d",
  Nobita.number,Nobita.name,Nobita.score,
  Shizuka.number,Shizuka.name,Shizuka.score,
  Takeshi.number,Takeshi.name,Takeshi.score,
  Suneo.number,Suneo.name,Suneo.score);
  fclose(fp);

  return 0;
}
