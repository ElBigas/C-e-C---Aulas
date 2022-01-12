#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 1, b = 2, c = 3;

if (a > 0){
    printf("%d é maior que 0 \n \n", a);
}

if (c > b) {
    printf("%d é maior que %d \n \n", c, b);}

if (a < c) {
    printf("%d é menor que %d \n \n", a, c);}

if (c != b) {
printf("%d é diferente de %d \n \n", c, b);
}
}
