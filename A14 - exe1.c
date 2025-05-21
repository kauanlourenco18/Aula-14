#include <stdio.h>
#include <math.h>

//Considere a Equação da queda livre: H = (g * t^2) / 2  => t = √(2H/g) e a Gravidade = 9.81 m/s²
float calcular_tempo_queda(float altura) {
    return sqrt((2 * altura) / 9.81);
}

//Considere a Distância = velocidade * tempo
float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo = calcular_tempo_queda(altura);
    return velocidade * tempo;
}

int main(void) {
    float alt, vel;

    printf("Informe a altura do avião (em metros): ");
    scanf("%f", &alt);

    printf("Informe a velocidade do avião (em m/s): ");
    scanf("%f", &vel);

    float tempo_queda = calcular_tempo_queda(alt);
    float distancia = calcular_distancia_liberacao(vel, alt);

    printf("Tempo até a queda: %.2f segundos\n", tempo_queda);
    printf("Distância do alvo que o objeto deve ser liberado: %.2f metros\n", distancia);

    return 0;
}
