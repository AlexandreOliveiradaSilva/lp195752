/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int valores[100];
    int i, maior, posicao;

    for (i = 0; i < 100; i++) {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    posicao = 1;

    for (i = 1; i < 100; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i + 1;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
