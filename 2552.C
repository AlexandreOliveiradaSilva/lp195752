#include <stdio.h>

int main() {

    int N, M;

    while (scanf("%d %d", &N, &M) != EOF) {

        int matriz[N][M];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < M; j++) {

                if (matriz[i][j] == 1) {
                    printf("9");
                }
                else {

                    int contador = 0;

                    if (i > 0 && matriz[i - 1][j] == 1)
                        contador++;

                    if (i < N - 1 && matriz[i + 1][j] == 1)
                        contador++;

                    if (j > 0 && matriz[i][j - 1] == 1)
                        contador++;

                    if (j < M - 1 && matriz[i][j + 1] == 1)
                        contador++;

                    printf("%d", contador);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
