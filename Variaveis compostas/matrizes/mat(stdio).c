#include<stdio.h>

//inicio do main
int main(){

	//cria uma matriz com 3 linhas e 3 colunas para alocamento de valores
	int mat[3][3];

	//trata o input e aloca nas posicoes da matriz
	printf("Escreva 9 numeros\n");
	for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
		    scanf("%i", &mat[i]);
	}
	printf("\n\n");

	//realiza a apresentacao dos valores armazenados
	for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%i ",mat[j]);
        printf("\n");
    }
}
