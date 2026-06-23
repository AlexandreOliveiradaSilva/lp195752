#include <stdio.h>

int sudoku[9][9];

int verificarLinhas() {

    for(int i = 0; i < 9; i++) {

        int soma = 0;
        int produto = 1;

        for(int j = 0; j < 9; j++) {

            if(sudoku[i][j] < 1 || sudoku[i][j] > 9)
                return 0;

            soma += sudoku[i][j];
            produto *= sudoku[i][j];
        }

        if(soma != 45 || produto != 362880)
            return 0;
    }

    return 1;
}

int verificarColunas() {

    for(int j = 0; j < 9; j++) {

        int soma = 0;
        int produto = 1;

        for(int i = 0; i < 9; i++) {

            soma += sudoku[i][j];
            produto *= sudoku[i][j];
        }

        if(soma != 45 || produto != 362880)
            return 0;
    }

    return 1;
}

int verificarBlocos() {

    for(int linha = 0; linha < 9; linha += 3) {

        for(int coluna = 0; coluna < 9; coluna += 3) {

            for(int i = linha; i < linha + 3; i++) {

                for(int j = coluna; j < coluna + 3; j++) {

                    soma += sudoku[i][j];
                    produto *= sudoku[i][j];
                }
            }

            if(soma != 45 || produto != 362880)
                return 0;
        }
    }

    return 1;
}

int main() {

    int n;

    scanf("%d", &n);

    for(int instancia = 1; instancia <= n; instancia++) {

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }

        printf("Instancia %d\n", instancia);

        if(verificarLinhas() &&
           verificarColunas() &&
           verificarBlocos())
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
            int soma = 0;
            int produto = 1;
