/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
-------------------------------------------------------------------------- */

#include <stdio.h>

int main () {
    
    int N[20];
    int i, j, temp;
    
    for(i=0; i<20; i++) {
        scanf("%d", &N[i]);
    }

    
    for( i = 0 , j = 19; i<j ; i++ , j--){
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
    }
    
    for(i = 0 ; i <20 ; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    
    return 0;
}
