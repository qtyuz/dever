#include <stdio.h>

int main() {

    float salarioAtual, percentualReajuste, novoSalario;


    printf("Digite o salário atual do funcionário:\n");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste:\n");
    scanf("%f", &percentualReajuste);


    novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));


    printf("O novo salário do funcionário é: %.2f", novoSalario);

    return 0;
}
