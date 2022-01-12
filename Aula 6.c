#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 4;
char b = 'x';

if (a == 1) {printf("Opção escolhida: 1 \n");
} else if (a == 2) {printf("Opção escolhida: 2 \n");

} else if (a == 3) {printf("Opção escolhida: 3 \n");

} else {printf("Opção inválida. \n"); }

switch (a) {

case 1:
    printf("Opção escolhida: 1 \n");
    break;

case 2:
    printf("Opção escolhida: 2 \n");
    break;

case 3:
    printf("Opção escolhida: 3 \n");
    break;

default:
    printf("Opção inválida. \n");
    break;
}

}
