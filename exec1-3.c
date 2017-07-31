#include <stdio.h>

double o_to_c(double oz);

int main(void) {
    double oz;
    printf("オンス数を入力:");
    scanf("%lf", &oz);
    printf("\n");

    double result = o_to_c(oz);
    printf("結果: %lf", result);
    printf("\n");
}

double o_to_c(double oz) {
    return oz / 8;
}
