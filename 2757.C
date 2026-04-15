#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // Normal
    printf("A = %d, B = %d, C = %d\n", a, b, c);

    // 10 dígitos, justificado à direita
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);

    // 10 dígitos, preenchido com zeros
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);

    // 10 dígitos, justificado à esquerda
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
}
