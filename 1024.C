#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // consumir '\n'

    char str[1001];

    for (int i = 0; i < N; i++) {
        fgets(str, sizeof(str), stdin);

        // remover '\n' do fgets
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        // 1ª passada: desloca letras +3
        for (int j = 0; j < len; j++) {
            if (isalpha(str[j])) {
                str[j] += 3;
            }
        }

        // 2ª passada: inverter string
        for (int j = 0; j < len / 2; j++) {
            char temp = str[j];
            str[j] = str[len - 1 - j];
            str[len - 1 - j] = temp;
        }

        // 3ª passada: metade em diante -1
        for (int j = len / 2; j < len; j++) {
            str[j] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
