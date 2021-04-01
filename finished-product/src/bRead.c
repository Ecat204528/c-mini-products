#include <stdio.h>
#include <stdlib.h>

void main(){
  FILE *file;
  int i, size;
  char *rdata;
  file = fopen("test.bin","rb");
  if (file == NULL) {
    printf("can not open file\n");
    exit(1);
  }

  fseek(file, 0, SEEK_END);
  size = ftell(file);
  rdata = (char*)malloc(sizeof(char)*size);

  fseek(file, 0, SEEK_SET);
  fread(rdata, sizeof(char), size, file);
  fclose(file);
  for (i = 0; i < size; i++) {
    printf("%x ", rdata[i]);
  }
  printf("\n");
  free(rdata);
}
