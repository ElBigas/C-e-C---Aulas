#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>
#include <time.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

//Alimentar o rand de forma diferente

srand((unsigned) time(NULL));

//Vari�vel que recebe o resto da divis�o do n�mero por 3

int random = rand() % 3;

printf("%d \n \n", random);

//Vari�vel que recebe o resto da divis�o do n�mero por 5

int randomsecond = (rand() % 5) + 1;

printf("%d \n \n", randomsecond);

}
