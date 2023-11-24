#include<iostream>
using namespace std;

//inicio main
int main(){
    
    //cria um vetor com 3 espacos de alocamento
    int vetor[3];

    //trata o input e aloca nas posicoes do vetor
    cout << "Escreva 3 numeros" << endl;
    for(int i = 0; i < 3; i++){
        cin >> vetor[i];
    }
    cout << endl << endl;

    //realiza a apresentacao dos valores armazenados
    for(int j = 0; j < 3; j++) cout << vetor[j] << " ";
}
