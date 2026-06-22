/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char linha[100];

    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        size_t len = strlen(linha);
        if (len > 0 && linha[len - 1] == '\n') {
            linha[len - 1] = '\0';
        }

        int proximo_eh_maiusculo = 1;

        for (int i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                if (proximo_eh_maiusculo) {
                    linha[i] = toupper(linha[i]);
                    proximo_eh_maiusculo = 0;
                } else {
                    linha[i] = tolower(linha[i]);
                    proximo_eh_maiusculo = 1;
                }
            }
        }

        printf("%s\n", linha);
    }

    return 0;
}
