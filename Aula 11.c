#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int opcao;

while(opcao < 1 || opcao > 3){

    printf("Escolha uma opção \n \n");

printf("1 - Opção 1 \n");
printf("2 - Opção 2 \n");
printf("3 - Opção 3 \n \n");

//Lendo a opção

scanf("%d", &opcao);

switch (opcao){
    case 1:
    printf("\nVocê escolheu a opção 1 \n");
    break;

    case 2:
    printf("\nVocê escolheu a opção 2 \n");
    break;

    case 3:
    printf("\nVocê escolheu a opção 3 \n");
    break;

    default:
    printf("\nVocê não escolheu nenhuma opção \n \n");
    break;

}

}


}
