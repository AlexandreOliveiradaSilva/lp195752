/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

#include <stdio.h>

long long granizo(long long n, long long maior) {
    if (n > maior)
        maior = n;

    if (n == 1)
        return maior;

    if (n % 2 == 0)
        return granizo(n / 2, maior);

    return granizo(3 * n + 1, maior);
}

int main() {
    long long h;

    while (scanf("%lld", &h) && h) {
        printf("%lld\n", granizo(h, h));
    }

    return 0;
}
