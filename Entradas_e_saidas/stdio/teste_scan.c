#include<stdio.h>

int main(){
	
	int num;
	float deci;

	printf("Escreva um numero inteiro, e um numero decimal: ");
	scanf("%i %f", &num, &deci);
	printf("valor que entrou foi %i e %.2f\n",num,deci);

	char let;	

	printf("Escreva uma letra: ");
	scanf("%s", &let);
	printf("a letra escrita foi %c", let);
}


