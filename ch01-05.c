#include <stdio.h>

int main(void) {
    int num;
    float f;

    printf("整数を入力してください:");
    scanf("%d", &num);

    printf("浮動小数点を入力してください:");
    scanf("%f", &f);

    printf("%d,", num);
    printf("%f", f);

    return 0;
}
