#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>
#define TAM 3

//Fun��o principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

int vetor [TAM], cont;

//Passando valor para vetor

vetor [0] = 1;
vetor [1] = 2;
vetor [2] = 3;
vetor [3] = 4;

//Adicionando 1 para cara posi��o
for (cont = 0; cont <= TAM; cont++) {
    vetor[cont] = vetor[cont] + 1;
}

//Exibir valor do vetor

printf("Posi��o 0: %d \n", vetor [0]);
printf("Posi��o 1: %d \n", vetor [1]);
printf("Posi��o 2: %d \n", vetor [2]);
printf("Posi��o 3: %d \n \n \n", vetor [3]);

//La�o de repeti��o

for (cont = 0; cont <= TAM; cont++) {
    printf("Posi��o %d: %d \n", cont, vetor[cont]);
}

//Lendo 3 valores para o vetor
for (cont = 0; cont <= TAM; cont++) {
    scanf("%d \n", &vetor[cont]);
}

for (cont = 0; cont <= TAM; cont++) {
    printf("Posi��o %d: %d \n", cont, vetor[cont]);
}

}
