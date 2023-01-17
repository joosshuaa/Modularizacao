/* Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o
 maior entre eles e imprima: O percentual do menor em relação ao maior
O módulo da diferença entre o maior e o menor*/
#include <stdio.h>
#include <stdlib.h>

// função para ler inteiros dentro de um intervalo
int scanIntIntervalo(int min, int max) {
    int valor;
    do {
        printf("Informe um valor entre %d e %d: ", min, max);
        scanf("%d", &valor);
    } while (valor < min || valor > max);
    return valor;
}

// função para calcular percentual
float percentual(int valor, int total) {
    return (100.0 * valor) / total;
}

// função para calcular valor absoluto da diferença
float absdif(float a, float b) {
    return abs(a - b);
}

int main() {
    int x = scanIntIntervalo(0, 1000);
    int y = scanIntIntervalo(0, 1000);

    // encontrar o maior valor
    int maior = x > y ? x : y;
    int menor = x < y ? x : y;

    printf("Percentual do menor em relacao ao maior: %.2f%%\n", percentual(menor, maior));
    printf("Modulo da diferenca entre o maior e o menor: %.2f\n", absdif(maior, menor));

    return 0;
}









  
