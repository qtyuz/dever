#include <stdio.h>

int main() {
    // Declaração das variáveis
    int anos, meses, dias, idadeDias;

    // Entrada de dados
    printf("Digite a idade da pessoa em anos, meses e dias:\n");
    scanf("%d%d%d", &anos, &meses, &dias);

    // Cálculo da idade em dias
    idadeDias = (anos * 365) + (meses * 30) + dias;

    // Exibição do resultado
    printf("A idade da pessoa em dias é: %d", idadeDias);

}
