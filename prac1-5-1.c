#include <stdio.h>

int main(void) {
    float x;
    float y;
    float z;

    printf("縦の値を入力:");
    scanf("%f", &x);
    printf("横の値を入力:");
    scanf("%f", &y);
    printf("高さの値を入力:");
    scanf("%f", &z);
    printf("\n");
    printf("体積: %f", x * y * z);

    return 0;
}
