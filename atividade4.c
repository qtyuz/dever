#include <stdio.h>

char classificaSalario(float salario, float salarioMinimo) {
    if (salario < salarioMinimo) {
        return "Abaixo do salario minimo";
    } else if (salario == salarioMinimo) {
        return "Salario igual ao salario minimo";
    } else {
        return "Acima do salario minimo";
    }
}


void mostraClassifica(char sexo, float salario, float salarioMinimo) {
    char* classificacao = classificaSalario(salario, salarioMinimo);
    char* sexoExtenso = (sexo == 'M') ? "Masculino" : "Feminino";
    printf("Salario: R$%.2f\nClassificacao: %s\nSexo: %s\n\n", salario, classificacao, sexoExtenso);
}

int main() {
    float salarioMinimo = 1400.0;
    int numAssalariados, abaixoSalarioMinimo = 0, acimaSalarioMinimo = 0;
    printf("Digite o numero de assalariados: ");
    scanf("%d", &numAssalariados);
    for (int i = 0; i < numAssalariados; i++) {
        char sexo;
        float salario;
        printf("Digite o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o salario do assalariado: ");
        scanf("%f", &salario);
        if (salario < 1.0) {
            printf("Salario invalido!\n");
            i--;
            continue;
        }
        if (salario < salarioMinimo) {
            abaixoSalarioMinimo++;
        } else {
            acimaSalarioMinimo++;
        }
        mostraClassifica(sexo, salario, salarioMinimo);
    }
    printf("Assalariados abaixo do salario minimo: %d\n", abaixoSalarioMinimo);
    printf("Assalariados acima do salario minimo: %d\n", acimaSalarioMinimo);
    return 0;
}
