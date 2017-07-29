#include <stdio.h>

int main(void) {
    float a;
    float b;

    printf("aを入力:");
    scanf("%f", &a);
    printf("bを入力:");
    scanf("%f", &b);
    printf("合計:%f", a + b);
    printf("\n");
    return 0;
}
