#include <stdio.h>
#include <stdlib.h>

void main(){
  FILE *file;
  int c;
  file = fopen("/home/ecat/workspace/work-c/dev/sample.txt", "r");
  if (file == NULL){
    printf("can not open file\n");
    exit(1);
  }

  while ( (c=fgetc(file)) != EOF ) {
    printf("%c", c);
  }

  fclose(file);
}
