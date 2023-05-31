#include<iostream>
using namespace std;

int main(){
	
	//cria uma variavel do tipo int chamada i 
	//e uma do tipo char chamada resp
	int i = 0;
	char resp;
	
	//inicio do laço com o teste de repetir ou não
	while(resp != 'n'){
		
		i++;
		cout << i << endl;
		//abre ao usuario modificar a variavel
		//de condição de repetição
		cout << "deseja prosseguir? s/n: ";
		cin >> resp;
		
		cout << "\n\n";
	}
}


