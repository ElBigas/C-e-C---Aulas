#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

char palavra[10];

//instrução
printf("Digite algo: \n \n");

//limpeza de buffer
setbuf(stdin, 0);

//lê a string
fgets(palavra, 255, stdin);

//limpa casas não utilizadas
palavra[strlen(palavra)-1] = '\0';

printf("\n%s \n", palavra);
}
