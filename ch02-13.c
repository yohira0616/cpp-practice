#include <stdio.h>

/*
 * 素数判定プログラム
 */
int main(void) {
    int num = 0;
    int i;
    int is_prime;

    for (; num <= 1;) {
        printf("判定したい数を入力: ");
        scanf("%d", &num);
    }

    is_prime = 1;
    for (i = 2; i <= num / 2; i = i + 1) {
        if ((num % i) == 0) {
            is_prime = 0;
        }
        if (is_prime == 1) {
            printf("素数です");
        } else {
            printf("素数ではない");
        }
        return 0;
    }


}