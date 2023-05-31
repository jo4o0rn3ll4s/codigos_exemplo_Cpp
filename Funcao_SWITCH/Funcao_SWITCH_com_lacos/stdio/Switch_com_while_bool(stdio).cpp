#include<stdio.h>

//inicio do main
int main(){
	
	//declara as variaveis
	int val1, val2;
	bool flag;		//variavel booleana, recebe apenas 2 niveis de informacao (0/1, true/false)
	
	//inicio do laco
	do{
	flag = 0;		//inicializacao da variavel booleana em 0, fazendo assim o teste pra o while ser falso

	//adquire um valor e armazena ele em val1
	printf("Entre com um valor entre 1 e 3: \n");
	scanf("%i", &val1);
	
	//realiza a comparacao da val1 aos casos definidos
	switch(val1){
		case 1:
			// se val1 = 1
			val2 = val1 + 1;
			printf("Valor calculado: %i", val2);
			break;
			
		case 2:
			//se val1 = 2
			val2 = val1*2;
			printf("Valor calculado: %i", val2);	
			break;
			
		case 3:
			//se val1 = 3
			val2 = val1/3;
			printf("Valor calculado: %i", val2);			
			break;
			
		default :
			//se val1 nao corresponde a nenhum dos casos
			printf("Responda direito! \n");
			flag = 1;		//variavel booleana recebe o estado 1, logo torna o teste no while verdadeiro, e executa um loop
		}
	}
	//avaliacao do laco de repeticao
	while(flag);
}


