#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int *y;

    printf("Digite valor de 25: ");
    scanf("%i", &x);
    y = &x;
    printf("Endereco da variavel x: %i \n", &x);
    printf("Endereco da variavel y: %i", y);
    printf("\n ------------------ \n");
    *y = 12;
    printf("Valor de y: %i", *y);
    printf("\n ------------------ \n");    
    y = y + 1;
    *y = *y + 5;
    printf("Valor de x: %i\n", x);
    return 0;
}