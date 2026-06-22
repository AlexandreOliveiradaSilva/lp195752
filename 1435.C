/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Alexandre OLiveira da Silva Ramalho
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n;

    do
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int menor = i;

                if (j < menor)
                    menor = j;

                if (n - 1 - i < menor)
                    menor = n - 1 - i;

                if (n - 1 - j < menor)
                    menor = n - 1 - j;

                if (j == 0)
                    printf("%3d", menor + 1);
                else
                    printf(" %3d", menor + 1);
            }

            printf("\n");
        }

        printf("\n");

    } while (1);

    return 0;
}
