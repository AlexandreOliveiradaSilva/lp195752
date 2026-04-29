#include <stdio.h>

int main() {
    int n, i;
    int tabuada[10][3];

    scanf("%d", &n);

    for (i = 0; i < 10; i++) {
        tabuada[i][0] = i + 1;
        tabuada[i][1] = n;
        tabuada[i][2] = (i + 1) * n;
    }

    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", tabuada[i][0], tabuada[i][1], tabuada[i][2]);
    }

    return 0;
}
