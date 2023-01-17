#include <stdio.h>

int fat(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf("Fatorial de %d = %d\n", n, fat(n));
    return 0;
}
