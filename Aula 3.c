#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

//Variaveis
int a = 2, opcao = 3 ;
float b = 1.5;
char c = 'x';

//Condicionais simples
if (a == 2) {
    printf("A vari�vel a � = 2 \n \n");
}

if (b == 1.5) {
    printf("A vari�vel b � = 1.5 \n \n");
}

if (c == 'x') {
    printf("A vari�vel c � = letra x \n \n");
}

if(a % 2 == 1) {
    printf("O n�mero %d � �mpar. \n \n", a );
} else{printf("O n�mero %d � par. \n \n", a );

}

if(opcao == 1) {
    printf("A op��o � igual 1 \n");
} else if (opcao == 2) {
printf("Op��o � = %d \n", opcao);
} else{
printf("Op��o diferente de 1 e 2. \n");
}
}
