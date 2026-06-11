#include <stdio.h>

int josephus(int n, int m) {
    int p = 0;
    for (int i = 2; i <= n - 1; i++)
        p = (p + m) % i;
    return p;
}

int main() {
    int n;

    while (scanf("%d", &n) && n) {
        int m = 1;

        while (1) {
            if ((josephus(n, m) + 1) == 12)
                break;
            m++;
        }

        printf("%d\n", m);
    }

    return 0;
}
