#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int a = 1, b = 10;

//Contando até 10

while(a <= 10){
    printf("%d \n \n", a);

//Incremento
    a++; //a = a + 1;
}

printf("_______________________________ \n \n");

//Contagem regressiva

while(b >= 1){
    printf("%d \n \n", b);
    b--; //b = b - 1;
}
}

