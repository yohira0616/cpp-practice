#include <stdio.h>

int main(void) {
    int min_per_second = 60;
    int second_per_hour = 60;
    int hour_per_day = 24;

    int day_count = 365;

    printf("一年の秒数は %d", min_per_second * second_per_hour * hour_per_day * day_count);
    return 0;
}
