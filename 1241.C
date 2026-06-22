/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[1001], b[1001];
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s %s", a, b);
        
        int lenA = strlen(a);
        int lenB = strlen(b);
        
        if (lenB <= lenA && strcmp(a + lenA - lenB, b) == 0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    
    return 0;
}
