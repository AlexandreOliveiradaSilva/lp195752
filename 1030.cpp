#include <stdio.h>

int main() {
    int NC;
    scanf("%d", &NC);

    for (int caso = 1; caso <= NC; caso++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int res = 0;

        for (int i = 1; i <= n; i++) {
            res = (res + k) % i;
        }

        printf("Case %d: %d\n", caso, res + 1);
    }

    return 0;
}
