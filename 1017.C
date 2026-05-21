#include <stdio.h>

float calcularlitros(int tempo , int velocidade) {
    float distancia , litros;
    
    distancia = velocidade * tempo;
    litros = distancia / 12.0;
    
    return litros;
}

int main() {
    int tempo , velocidade;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    printf("%.3f\n", calcularlitros(tempo, velocidade));
    
    return 0;
}
