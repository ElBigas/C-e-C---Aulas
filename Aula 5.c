#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 2, b = 3;

//Conectivo lógico(And, e...)
if (a > 0 && a <= 2) {
    printf("A variável 'a' está entre 0 e 2. \n \n");
}

//Conectivo lógico(ou...)
if (b > 12 || b > 2) {
    printf("A variável 'b' é maior que 2 ou 12. \n \n");
}

if (a > 1 && b > 2 || a == 20) {
    printf("A variável 'a' e 'b' são maiores que 1 e 2, respectivamente. \n \n");
}
}
