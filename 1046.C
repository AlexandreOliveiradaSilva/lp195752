/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    int duracao;
    
    duracao = (24 - inicio) + fim;
    
    if(inicio < fim) {
        duracao = fim - inicio;
    }
    
    return duracao;
    
}

int main() {
   int inicio, fim;
   
   scanf("%d %d", &inicio, &fim);
   
   printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao( inicio, fim));
   
   return 0;
   
}
