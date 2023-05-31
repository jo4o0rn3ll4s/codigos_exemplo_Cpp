#include<stdio.h>

//inicio do main
int main(){
	
	//declaracao das variaveis
	int i = 0;
	char resp[2];
	
	//inicio do laco
	do{
		i++;
		printf("%i \n", i);
		printf("deseja prosseguir? s/n: ");
		scanf("%s", &resp);
		
		printf("\n\n");
	}
	//avaliacao da condicao de retorno
	while(resp[0] != 'n');
}


