#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

char palavra[10];

//instru��o
printf("Digite algo: \n \n");

//limpeza de buffer
setbuf(stdin, 0);

//l� a string
fgets(palavra, 255, stdin);

//limpa casas n�o utilizadas
palavra[strlen(palavra)-1] = '\0';

printf("\n%s \n", palavra);
}
