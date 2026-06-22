/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int par[5], impar[5];
    int p = 0, i = 0;
    int num;

    for(int k = 0; k < 15; k++) {

        scanf("%d", &num);

        if(num % 2 == 0) {

            par[p] = num;
            p++;

            if(p == 5) {

                for(int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }

                p = 0;
            }
        }

        else {

            impar[i] = num;
            i++;

            if(i == 5) {

                for(int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }

                i = 0;
            }
        }
    }
    
    for(int j = 0; j < i; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    for(int j = 0; j < p; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
