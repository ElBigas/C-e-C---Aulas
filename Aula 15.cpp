#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal do programa
int main(){

//Idioma local
setlocale(LC_ALL,"");

//criando matriz
int matriz [2] [2], i, j;

matriz [0] [0] = 1;
matriz [0] [1] = 2;
matriz [1] [0] = 3;
matriz [1] [1] = 4;


//imprimindo valores na tela
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    //cout << "\ni = " << i << ", j =" << j;
    cout << matriz [i] [j] << " ";
}
cout << "\n";
}

//lendo valores para a matriz
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    cin >> matriz [i] [j];
}
}

//lendo valores para a matriz
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    //cout << "\ni = " << i << ", j =" << j;
    cout << matriz [i] [j] << " ";
}
cout << "\n";
}

return 0;

}
