#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 2, b = 3;

//Conectivo l�gico(And, e...)
if (a > 0 && a <= 2) {
    printf("A vari�vel 'a' est� entre 0 e 2. \n \n");
}

//Conectivo l�gico(ou...)
if (b > 12 || b > 2) {
    printf("A vari�vel 'b' � maior que 2 ou 12. \n \n");
}

if (a > 1 && b > 2 || a == 20) {
    printf("A vari�vel 'a' e 'b' s�o maiores que 1 e 2, respectivamente. \n \n");
}
}
