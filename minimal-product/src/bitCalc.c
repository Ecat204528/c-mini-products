#include <stdio.h>

int main(void)
{
    unsigned char i = 0x0f;
    printf("%d\n", i);
    printf("%x\n", i & 0x0f);
    printf("%x\n", i | 0xf0);
    printf("%x\n", i ^ i);
    printf("%x\n", i ^ 0xff);

    return 0;
}