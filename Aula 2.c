#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

setlocale(LC_ALL,"");

printf("Ol� amigos! \n \n");

//Definindo vari�veis

int a = 4, b = 2;

//Soma

printf ("a = %d \n", a);
printf ("b = %d \n", b);
printf ("____________________________________\n \n");
printf ("A soma de %d + %d � = %d \n \n", a, b, a + b);
printf ("____________________________________\n \n");

//Subtra��o

printf ("A subtra��o de %d - %d � = %d \n \n", a, b, b - a);
printf ("____________________________________\n \n");

//Divis�o

printf ("A divis�o de %d / %d � = %d \n \n", a, b, a / b);
printf ("____________________________________\n \n");

//Multiplica��o

printf ("A multiplica��o de %d X %d � = %d \n \n", a, b, a * b);
printf ("____________________________________\n \n");

//Resto da divis�o
printf ("O resto da divis�o de %d / %d � = %d \n \n", a, b, a % b);
printf ("____________________________________\n \n");

//Valor absoluto
printf ("O valor absoluto da subtra��o de b - a � = %d \n \n", abs(b - a));

system("pause");

}
