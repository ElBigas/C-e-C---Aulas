#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main () {

setlocale (LC_ALL, "");

printf("%d \n \n", TAM);

int a;

for(a = 1; a <= TAM; a++){
    printf("%d \n", a);
}

}