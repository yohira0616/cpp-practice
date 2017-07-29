#include <stdio.h>

int get_sqr(void);

int main(void) {
    int sqr;
    sqr = get_sqr();
    printf("二乗値: %d", sqr);
    return 0;
}

int get_sqr(void) {
    int num;

    printf("整数を入力してください:");
    scanf("%d", &num);
    return num * num;
}


