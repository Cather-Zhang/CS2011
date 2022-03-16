#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int x = 0x80000000;
    int y = 0;
    int z = 10;
    printf("not %x (%d): %d\n",x,x, !x);
    printf("not 0: %d\n", !y);
    printf("not 10: %d\n", !z);

}