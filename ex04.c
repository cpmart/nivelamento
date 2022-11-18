#include <stdio.h>

int main(){
    int ano, a, b, perfilDoDoido;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    a = ano/100;
    b = ano-a*100;
    perfilDoDoido = (a+b)%5;
    if(perfilDoDoido == 0)
        printf("Tímido!!!\n");
    else if(perfilDoDoido == 1)
        printf("Sonhador!!!\n");
    else if(perfilDoDoido == 2)
        printf("Paquerador!!!\n");
    else if(perfilDoDoido == 3)
        printf("Atraente!!!\n");
    else 
        printf("Irresistível!!!\n");
        
}