#include <stdio.h>

int validaQuantidade(int pecas) {
    if (pecas >= 0) {
        return 1; 
    } else {
        return 0; 
    }
}
float calculaSalario(int pecas) {
    const float SALARIO_BASE = 600.0;
    float adicional = 0.0;
    
    if (pecas > 50 && pecas <= 80) {
        adicional = 0.5 * (pecas - 50);
    } else if (pecas > 80) {
        adicional = 0.5 * 30 + 0.75 * (pecas - 80);
    }
    
    return SALARIO_BASE + adicional;
}
int main() {
    int pecas;
    float salario;
    
    while (1) { 
        printf("Digite a quantidade de pecas fabricadas ou um valor negativo para sair: ");
        scanf("%d", &pecas);
        
        if (pecas < 0) { 
            break;
        }
        
        if (validaQuantidade(pecas)) {
            salario = calculaSalario(pecas);
            printf("O salario do funcionario e: R$ %.2f\n", salario);
        } else {
            printf("Quantidade invalida de pecas!\n");
        }
    }
    
    printf("Fim do programa.\n");
    
    return 0;
}
