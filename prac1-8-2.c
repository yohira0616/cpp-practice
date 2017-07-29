#include <stdio.h>

float convert(void);

int main(void) {
    float pond = convert();
    printf("\n");
    printf("ポンド: %f", pond);
    return 0;
}

float convert(void) {
    float dollar;
    float rate = 0.5;
    printf("ドルを入力: ");
    scanf("%f", &dollar);
    return dollar * rate;
}
