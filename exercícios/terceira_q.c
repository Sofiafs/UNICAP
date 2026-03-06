#include <stdio.h>

int main() {

    float valor = 780000.0, primeiro, segundo, terceiro;

    primeiro = valor * 0.46;
    segundo  = valor * 0.32;
    terceiro = valor - primeiro - segundo;

    printf("O primeiro ficou com: %.2f\n", primeiro);
    printf("O segundo ficou com: %.2f\n", segundo);
    printf("O terceiro ficou com: %.2f\n", terceiro);

    return 0;
}