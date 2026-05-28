#include <stdio.h>

int calls = 0;

int fibonacci(int n) {
    calls++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        calls = 0;

        int resultado = fibonacci(X);

        printf("fib(%d) = %d calls = %d\n", X, calls - 1, resultado);
    }

    return 0;
}
