#include<stdio.h>
int main(){
	int feijao[3];
	printf("escreva 3 numeros\n");
	for(int i = 0; i < 3; i++){
		scanf("%i", &feijao[i]);
	}
	printf("\n\n");
	for(int j = 0; j<3; j++) printf("%i ",feijao[j]);
}
