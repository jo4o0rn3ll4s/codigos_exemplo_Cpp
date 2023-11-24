#include<iostream>
using namespace std;

int main(){
	//cria uma variavel do tipo int chamada value
	int value;
	
	//recebe um valor vindo do usuario e armazena em value
	cout << "Digite um valor: " << endl;
	cin >> value;
	
	//compara value a 10
	if(value < 10){
		//se o valor for menor que 10
		cout << "O valor " << value << " e MENOR que 10";
	}
	else{
		if(value > 10)
		//se o valor maior que 10
		cout << "O valor " << value << " e MAIOR que 10";
		
		//se n�o for menor nem maior que 10
		else cout << "O valor " << value << " e o proprio 10";
	}
}


