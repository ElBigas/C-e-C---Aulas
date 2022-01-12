#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

setlocale(LC_ALL,"");

printf("Olá amigos! \n \n");

//Definindo variáveis

int a = 4, b = 2;

//Soma

printf ("a = %d \n", a);
printf ("b = %d \n", b);
printf ("____________________________________\n \n");
printf ("A soma de %d + %d é = %d \n \n", a, b, a + b);
printf ("____________________________________\n \n");

//Subtração

printf ("A subtração de %d - %d é = %d \n \n", a, b, b - a);
printf ("____________________________________\n \n");

//Divisão

printf ("A divisão de %d / %d é = %d \n \n", a, b, a / b);
printf ("____________________________________\n \n");

//Multiplicação

printf ("A multiplicação de %d X %d é = %d \n \n", a, b, a * b);
printf ("____________________________________\n \n");

//Resto da divisão
printf ("O resto da divisão de %d / %d é = %d \n \n", a, b, a % b);
printf ("____________________________________\n \n");

//Valor absoluto
printf ("O valor absoluto da subtração de b - a é = %d \n \n", abs(b - a));

system("pause");

}
