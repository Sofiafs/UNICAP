#include<stdio.h>

int main() {
    float valor, resultado;
    int desconto;
    
    printf("Digite um valor: ");
    scanf("%f", &valor);
    desconto = valor * 0.20;
    resultado = valor - desconto;
    
    printf("O valor com desconto ficou: %2.f", resultado);

    return 0;
}