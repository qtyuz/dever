#include <stdio.h>

int main() {
    int n; 
    printf("Digite o número de voltas da corrida: ");
    scanf("%d", &n);

    float tempos[n];
    float melhor_tempo = 3600;
    int volta_melhor_tempo = 0;
    float tempo_inteiro = 0;


    for (int i = 0; i < n; i++) {
        printf("Digite o tempo da volta %d: ", i + 1);
        scanf("%f", &tempos[i]);
        tempo_inteiro += tempos[i];

     
        if (tempos[i] < melhor_tempo) {
            melhor_tempo = tempos[i];
            volta_melhor_tempo = i + 1;
        }
    }

    float tempo_medio = tempo_inteiro / n;

    printf("Melhor tempo: %.2f segundos (volta %d)\n", melhor_tempo, volta_melhor_tempo);
    printf("Tempo médio: %.2f segundos\n", tempo_medio);

    return 0;
}
