#include <stdio.h>

void func(void);

int main(void) {
    printf("I like ");
    func();
    printf(".");
    return 0;
}

void func(void) {
    printf("C");
}