#include <stdio.h>

int main() {
    int num_times, num_jogadores, idade, peso, i, j;
    float media_idade, media_peso, peso_total;
    int num_menores = 0, num_pesados = 0, num_jogadores_total = 0;

    printf("Digite o número de times inscritos (entre 3 e 9): ");
    scanf("%d", &num_times);

    for (i = 1; i <= num_times; i++) {
        printf("\n\nTime %d\n", i);
        printf("Digite o número de jogadores inscritos (entre 6 e 11): ");
        scanf("%d", &num_jogadores);

        int idade_total = 0;
        peso_total = 0;

        for (j = 1; j <= num_jogadores; j++) {
            printf("Jogador %d\n", j);
            printf("Digite a idade do jogador: ");
            scanf("%d", &idade);
            printf("Digite o peso do jogador: ");
            scanf("%f", &peso);

            idade_total += idade;

            if (idade > 25) {
                peso_total += peso;
                if (peso > 80) {
                    num_pesados++;
                }
            }

            if (idade < 18) {
                num_menores++;
            }

            num_jogadores_total++;
        }

        media_idade = (float) idade_total / num_jogadores;
        media_peso = peso_total / (num_jogadores - (float) (idade_total < 18 ? 1 : 0));

        printf("\nMédia de idade dos jogadores: %.2f\n", media_idade);
        printf("Média do peso dos jogadores acima de 25 anos: %.2f\n", media_peso);
    }

    float porc_pesados = (float) num_pesados / num_jogadores_total * 100;
    printf("\nQuantidade de jogadores menores de idade: %d\n", num_menores);
    printf("Quantidade de jogadores com mais de 80kg: %d\n", num_pesados);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f%%\n", porc_pesados);

    return 0;
}
