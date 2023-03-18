#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor;
    float percent_distribuidor = 0.28, impostos = 0.45;

    printf("Informe o custo de fabrica do carro:R$");
    scanf("%f", &custo_fabrica);

    custo_consumidor = custo_fabrica + (custo_fabrica * percent_distribuidor) + (custo_fabrica * impostos);

    printf("O custo final do carro ao consumidor e:R$ %.2f\n", custo_consumidor);

    return 0;
}
