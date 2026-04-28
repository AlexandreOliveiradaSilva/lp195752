#include <stdio.h>
#include <string.h>

int main() {
    int n, shift;
    char str[55];

    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        scanf("%d", &shift);

        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = ((str[i] - 'A' - shift + 26) % 26) + 'A';
        }

        printf("%s\n", str);
    }

    return 0;
}
