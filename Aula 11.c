#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int opcao;

while(opcao < 1 || opcao > 3){

    printf("Escolha uma op��o \n \n");

printf("1 - Op��o 1 \n");
printf("2 - Op��o 2 \n");
printf("3 - Op��o 3 \n \n");

//Lendo a op��o

scanf("%d", &opcao);

switch (opcao){
    case 1:
    printf("\nVoc� escolheu a op��o 1 \n");
    break;

    case 2:
    printf("\nVoc� escolheu a op��o 2 \n");
    break;

    case 3:
    printf("\nVoc� escolheu a op��o 3 \n");
    break;

    default:
    printf("\nVoc� n�o escolheu nenhuma op��o \n \n");
    break;

}

}


}
