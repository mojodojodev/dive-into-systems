#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;

    int sum = base;
    for (int i = 0; i < exp - 1; i++) {
        sum = base * sum;
    }
    return sum;
}

int main() {
    int res = power(0, 5);
    printf("result: %d", res);

    return 0;
}
