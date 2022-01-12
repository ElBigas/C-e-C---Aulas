#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>
#include <time.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

//Alimentar o rand de forma diferente

srand((unsigned) time(NULL));

//Variável que recebe o resto da divisão do número por 3

int random = rand() % 3;

printf("%d \n \n", random);

//Variável que recebe o resto da divisão do número por 5

int randomsecond = (rand() % 5) + 1;

printf("%d \n \n", randomsecond);

}
