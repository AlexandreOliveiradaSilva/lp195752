#include <stdio.h>
#include <stdbool.h>

int sudoku[9][9];
bool inicial[9][9];


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

            int soma = 0;
            int produto = 1;

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

void imprimirTabuleiro() {
    printf("\n    1 2 3   4 5 6   7 8 9\n");
    printf("  +-------+-------+-------+\n");
    for (int i = 0; i < 9; i++) {
        printf("%d | ", i + 1);
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) {
                printf(". "); 
            } else {
                printf("%d ", sudoku[i][j]);
            }
            if ((j + 1) % 3 == 0) printf("| ");
        }
        printf("\n");
        if ((i + 1) % 3 == 0) {
            printf("  +-------+-------+-------+\n");
        }
    }
}

int tabuleiroCompleto() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) return 0;
        }
    }
    return 1;
}


int main() {
    int n;
    printf("Quantos tabuleiros (instancias) deseja jogar/testar? ");
    scanf("%d", &n);

    for(int instancia = 1; instancia <= n; instancia++) {
        printf("\n=== CONFIGURACAO DA INSTANCIA %d ===\n", instancia);
        printf("Digite o tabuleiro 9x9 (use 0 para espacos vazios):\n");
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
                if (sudoku[i][j] != 0) {
                    inicial[i][j] = true;
                } else {
                    inicial[i][j] = false;
                }
            }
        }

        int jogando = 1;
        while (jogando) {
            imprimirTabuleiro();

            printf("\n--- MENU DE JOGADA ---\n");
            printf("1. Inserir/Alterar numero\n");
            printf("2. Validar e finalizar tabuleiro\n");
            printf("Escolha uma opcao: ");
            int opcao;
            scanf("%d", &opcao);

            if (opcao == 1) {
                int l, c, v;
                printf("Digite a linha, coluna e o valor (Ex: 1 3 5): ");
                scanf("%d %d %d", &l, &c, &v);

                if (l < 1 || l > 9 || c < 1 || c > 9 || v < 0 || v > 9) {
                    printf("\n[ERRO] Coordenadas ou valores invalidos! Use de 1 a 9 (ou 0 para apagar).\n");
                    continue;
                }

                if (inicial[l-1][c-1]) {
                    printf("\n[ERRO] Voce nao pode alterar uma dica inicial do tabuleiro!\n");
                } else {
                    sudoku[l-1][c-1] = v;
                    printf("\nJogada realizada com sucesso!\n");
                }

            } else if (opcao == 2) {
                if (!tabuleiroCompleto()) {
                    printf("\n[AVISO] O tabuleiro ainda possui casas vazias. Deseja validar mesmo assim? (1-Sim / 0-Nao): ");
                    int confirmar;
                    scanf("%d", &confirmar);
                    if (!confirmar) continue;
                }

                printf("\nInstancia %d\n", instancia);
                if(verificarLinhas() && verificarColunas() && verificarBlocos()) {
                    printf("Parabéns! Tabuleiro correto e valido!\n\n");
                } else {
                    printf("❌ NAO! O tabuleiro possui erros de duplicidade ou esta incompleto.\n\n");
                }
                
                jogando = 0; 
            } else {
                printf("\nOpcao invalida!\n");
            }
        }
    }

    printf("Obrigado por jogar!\n");
    return 0;
}
