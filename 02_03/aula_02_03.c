#include<stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Seu IMC foi: %2.f ", imc);

    if (imc < 18.5) {
        printf(", Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf(", Na media\n");
    }
    else {
        printf(", Abaixo do peso\n");
    }

    return 0;
}