#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 1, b = 2, c = 3;

if (a > 0){
    printf("%d � maior que 0 \n \n", a);
}

if (c > b) {
    printf("%d � maior que %d \n \n", c, b);}

if (a < c) {
    printf("%d � menor que %d \n \n", a, c);}

if (c != b) {
printf("%d � diferente de %d \n \n", c, b);
}
}
