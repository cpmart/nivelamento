#include <stdio.h>

int main(){
    float lado1, lado2, area;
    printf("Digite o valor dos lados do retângulo: ");
    scanf("%f%f",&lado1, &lado2);
    area = lado1*lado2;
    printf("A área é: %6.2f m2\n",area);
    printf("A área é: %6.2f m2\n",lado1*lado2);   //não precisaria criar uma variável "area"    
}