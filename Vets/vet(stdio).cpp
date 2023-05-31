#include<stdio.h>

//inicio do main
int main(){

	//cria um vetor com 3 espacos de alocamento
	int vetor[3];

	//trata o input e aloca nas posicoes do vetor
	printf("Escreva 3 numeros\n");
	for(int i = 0; i < 3; i++){
		scanf("%i", &vetor[i]);
	}
	printf("\n\n");

	//realiza a apresentacao dos valores armazenados
	for(int j = 0; j < 3; j++) printf("%i ",vetor[j]);
}
