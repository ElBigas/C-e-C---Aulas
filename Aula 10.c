#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

//printf("Tabuada do 5 \n \n");

int cont;

for(cont = 1; cont <= 10; cont++){
    printf("5 X %d = %d \n", cont, cont * 5);
}

for(cont = 0; cont <= 10; cont = cont + 2){
    printf("%d \n", cont);
}

for(cont = 10; cont >= 0; cont--){
    printf("%d \n", cont);
}

}
