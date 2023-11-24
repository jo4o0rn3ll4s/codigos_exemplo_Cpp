#include<iostream>
using namespace std;

//inicio main
int main(){

    //cria uma matriz com 3 linhas e 3 colunas para alocamento de valores
    int mat[3][3];

    //trata o input e aloca nas posicoes da matriz
    cout << "Digite 9 valores";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cin >> mat[i][j];
    }
    cout << endl << endl;

    //realiza a apresentacao dos valores armazenados
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout << mat[i][j];
        cout << endl;
    }
}
