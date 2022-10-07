#include <stdio.h>

int main(){
    float lado, area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f",&lado);
    area = lado*lado;
    printf("A área é: %6.2f m2\n",area);
    printf("A área é: %6.2f m2\n",lado*lado);   //não precisaria criar uma variável "area"
    //printf("A área é: %g m2\n",area);       //%g  é um %f formatado


}