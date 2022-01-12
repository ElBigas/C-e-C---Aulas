#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

//Idioma local
setlocale(LC_ALL,"");

//Variaveis
int a = 2, opcao = 3 ;
float b = 1.5;
char c = 'x';

//Condicionais simples
if (a == 2) {
    printf("A variável a é = 2 \n \n");
}

if (b == 1.5) {
    printf("A variável b é = 1.5 \n \n");
}

if (c == 'x') {
    printf("A variável c é = letra x \n \n");
}

if(a % 2 == 1) {
    printf("O número %d é ímpar. \n \n", a );
} else{printf("O número %d é par. \n \n", a );

}

if(opcao == 1) {
    printf("A opção é igual 1 \n");
} else if (opcao == 2) {
printf("Opção é = %d \n", opcao);
} else{
printf("Opção diferente de 1 e 2. \n");
}
}
