#include <stdio.h>

unsigned long long potenciaDeDois(int n) {
    if (n == 0) return 1;
    return 2 * potenciaDeDois(n - 1);
}

void resolver() {
    int X;
    if (scanf("%d", &X) != 1) return;

    unsigned long long totalGrains;

    if (X == 64) {
       
        totalGrains = 0xFFFFFFFFFFFFFFFFULL;
    } else {
        totalGrains = potenciaDeDois(X) - 1;
    }

    
    unsigned long long kg = (totalGrains / 12) / 1000;

    printf("%llu kg\n", kg);
}

int main() {
    int N;
    if (scanf("%d", &N) == 1) {
        while (N--) {
            resolver();
        }
    }
    return 0;
}
