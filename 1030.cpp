/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

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
