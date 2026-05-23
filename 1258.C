#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camisa;

int comparar(const void *a, const void *b) {
    Camisa *c1 = (Camisa *)a;
    Camisa *c2 = (Camisa *)b;

    int cor = strcmp(c1->cor, c2->cor);
    if (cor != 0)
        return cor;

    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho;

    return strcmp(c1->nome, c2->nome);
}

int main() {
    int n;
    int primeiroCaso = 1;

    while (scanf("%d", &n) && n != 0) {

        getchar(); // remove o '\n'

        Camisa camisetas[60];

        for (int i = 0; i < n; i++) {

            fgets(camisetas[i].nome, 100, stdin);
            camisetas[i].nome[strcspn(camisetas[i].nome, "\n")] = '\0';

            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
            getchar(); // remove '\n'
        }

        qsort(camisetas, n, sizeof(Camisa), comparar);

        if (!primeiroCaso)
            printf("\n");

        primeiroCaso = 0;

        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n",
                   camisetas[i].cor,
                   camisetas[i].tamanho,
                   camisetas[i].nome);
        }
    }

    return 0;
}
