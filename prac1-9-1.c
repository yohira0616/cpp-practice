#include <stdio.h>

void outnum(int n);

int main(void) {
    outnum(42);
    return 0;
}

void outnum(int n) {
    printf("%d", n);
}
