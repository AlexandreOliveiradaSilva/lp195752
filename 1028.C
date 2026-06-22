/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int a, int b) {
    
    if (b == 0) {
      return a;
    }
    
    return mdc(b, a % b);
}

int main() {
    
    int N;
    int F1, F2;
    
    scanf("%d", &N);
    
    for( int i = 0; i < N; i++) {
        scanf("%d %d", &F1, &F2);
        
        printf("%d\n", mdc(F1, F2));
    }
    return 0;
}
