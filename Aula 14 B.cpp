#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

//Fun��o principal do programa
int main(){

//Idioma local
setlocale(LC_ALL,"");

//definindo uma string
string palavra;

//imprimindo na tela
cout << "Digite uma palavra \n \n";

//lendo uma string
cin >> palavra;

//imprimindo uma vari�vel
cout << "\nA palavra �: " << palavra;

return 0;

}
