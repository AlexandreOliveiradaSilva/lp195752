/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int n, i, j, total;
    char numero[101];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        scanf("%s", numero);

        total = 0;

        for(j = 0; numero[j] != '\0'; j++) {

            switch(numero[j]) {

                case '1':
                    total += 2;
                    break;

                case '7':
                    total += 3;
                    break;

                case '4':
                    total += 4;
                    break;

                case '2':
                case '3':
                case '5':
                    total += 5;
                    break;

                case '0':
                case '6':
                case '9':
                    total += 6;
                    break;

                case '8':
                    total += 7;
                    break;
            }
        }

        printf("%d leds\n", total);
    }

    return 0;
}
