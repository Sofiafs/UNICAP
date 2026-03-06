#include<stdio.h>

float somar(float n1, float n2) {
    return n1 + n2;
}


int main() {
    float n1, n2, soma;
    n1 = 15;
    n2 = 5;
    soma = somar(n1, n2);
    printf("Soma igual: %2.f\n", soma);

    n1 = 15;
    n2 = 10;
    soma = somar(n1, n2);
    printf("Soma igual: %2.f\n", soma);


    return 0;
}