#include <stdio.h>
#include <stdlib.h>

void main(){
  FILE *file;
  file = fopen("sample.txt", "w");
  if (file == NULL){
    printf("can't open the file.\n");
    exit(1);
  }
  fprintf(file,"Hello, World.\n");
  fprintf(file,"ABCDEF\n");
  fclose(file);
}
