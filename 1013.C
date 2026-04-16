#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    double maiorAB, maiorABC;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    maiorAB  = (a + b + abs(a - b)) / 2;
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%.1lf eh o maior\n", maiorABC);

    return 0;
}
