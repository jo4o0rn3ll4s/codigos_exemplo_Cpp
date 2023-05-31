#include<iostream>
using namespace std;

int main(){
	
	//cria uma variavel do tipo int chamada i 
	//e uma do tipo char chamada resp
	int i = 0;
	char resp;
	
	//inicio do laco
	do{
		i++;
		cout << i << endl;
		//abre ao usuario modificar a variavel
		//de condicao de repeticao
		cout << "deseja prosseguir? s/n: ";
		cin >> resp;
		
		cout << "\n\n";
	}
	//teste do laco para ver se repete ou nao
	while(resp != 'n');
}


