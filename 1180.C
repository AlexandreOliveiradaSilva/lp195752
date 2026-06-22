/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N;
    int X[1000];
    int i;
    int menor, posicao;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    menor = X[0];
    posicao = 0;

    for (i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
