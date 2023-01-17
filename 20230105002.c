#include <stdio.h>

// função para ler peso do feto e semanas de gestação
void ler_dados(float *peso_feto, int *semanas_gestacao) {
    printf("Informe o peso do feto em gramas: ");
    scanf("%f", peso_feto);

    printf("Informe a quantidade de semanas de gestacao: ");
    scanf("%d", semanas_gestacao);
}

// função para avaliar tipo de parto
void avaliar_parto(float peso_feto, int semanas_gestacao) {
    // verificar se parto deve ser realizado
    if (peso_feto < 100 || semanas_gestacao < 28) {
        printf("Parto nao devera ser realizado, reavaliar clinicamente\n");
        return;
    }

    // calcular meses
    int meses = semanas_gestacao / 4;

    // avaliar tipo de parto
    if (peso_feto > 2500 && meses > 7) {
        printf("Parto normal\n");
    } else if (peso_feto > 2500) {
        printf("Parto Cesariana\n");
    } else if (peso_feto >= 2000 && peso_feto <= 1500 && meses > 9) {
        printf("Parto normal\n");
    } else {
        printf("Parto Cesariana\n");
    }
}

int main() {
    float peso_feto;
    int semanas_gestacao;

    ler_dados(&peso_feto, &semanas_gestacao);
    avaliar_parto(peso_feto, semanas_gestacao);

    return 0;
}
