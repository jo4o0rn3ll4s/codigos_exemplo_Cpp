#include<iostream>
using namespace std;

//inicio do main
int main(){
	
	//declaracao das variaveis
	int val1, val2;
	
	//inicio do laco
	do{
	//adquire um valor e armazena ele em val1
	cout << "Entre com um valor entre 1 e 3: " << endl;
	cin >> val1;
	
	//realiza a comparacao da val1 aos casos definidos
	switch(val1){
		case 1:
			// se val1 = 1
			val2 = val1 + 1;
			cout << "Valor calculado: " << val2;
			break;
			
		case 2:
			//se val1 = 2
			val2 = val1*2;
			cout << "Valor calculado: " << val2;
			break;
			
		case 3:
			//se val1 = 3
			val2 = val1/3;
			cout << "Valor calculado: " << val2;
			break;
			
		default :
			//se val1 nao corresponde a nenhum dos casos
			cout << "Responda direito! \n";
		}
	}
	//teste de condicao de repeticao com operadores booleanos de logica AND
	while(val1 != 1 && val1 != 2 && val1 != 3);		
}


