#include<iostream>
using namespace std;

int main(){
	
	//cria uma variavel do tipo int chamada i 
	//e uma do tipo char chamada resp
	int i = 0;
	char resp;
	
	//inicio do la�o com o teste de repetir ou n�o
	while(resp != 'n'){
		
		i++;
		cout << i << endl;
		//abre ao usuario modificar a variavel
		//de condi��o de repeti��o
		cout << "deseja prosseguir? s/n: ";
		cin >> resp;
		
		cout << "\n\n";
	}
}


