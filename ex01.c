#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade (18/11/2022): ");
	printf("\a");		//som
	scanf("%d",&idade);
	printf("O dobro da sua idade é: %d anos\n",idade*2);
}