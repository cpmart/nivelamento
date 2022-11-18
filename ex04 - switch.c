#include <stdio.h>

int main(){
    int ano, a, b, perfilDoDoido;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    a = ano/100;
    b = ano-a*100;
    perfilDoDoido = (a+b)%5;
    switch (perfilDoDoido)
    {
    case 0:
        printf("Tímido!!!\n");
        break;
    case 1:
        printf("Sonhador!!!\n");
        break;
    case 2:
        printf("Paquerador!!!\n");
        break;
    case 3:
        printf("Atraente!!!\n");
        break;
    default:
        printf("Irresistível!!!\n");
        break;
    }
        
}