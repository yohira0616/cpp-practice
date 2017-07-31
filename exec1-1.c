#include <stdio.h>

double calc_moon_weight(float weight);

int main(void) {
    double moon_weight;
    double weight = 100;
    moon_weight = calc_moon_weight(weight);
    printf("体重 %f kgの人の月面体重は %f kg\n", weight, moon_weight);
}

double calc_moon_weight(float weight) {
    return 0.17 * weight;
}
