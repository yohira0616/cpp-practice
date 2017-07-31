#include <stdio.h>

int main(void) {
    int seventeen = 17;
    for (int i = 17; i < 101; i++) {
        if (i % seventeen == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}
