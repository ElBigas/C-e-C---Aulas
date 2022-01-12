#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Função principal do programa
void main(){

    //Idioma local
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("Estou aprendendo programação! \n \n");

    //Variável de número inteiro
    int a = 1;
    int b = 2;

    //%d corresponde aos números inteiros
    printf ("O valor de a é = %d \n \n", a);
    printf ("O valor de b é = %d \n \n", b);
    printf ("_______________________________________ \n");
    printf ("Soma de a + b = ");
    printf ("%d \n \n", a + b);
    printf ("Insira um outro valor para a \n");
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de a + b é = ");
    printf ("%d \n \n", a + b);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para b \n");
    scanf("%d", &b);
    printf("O valor de b mudou para %d \n", b);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de a + b é = ");
    printf ("%d \n \n", a + b);
    printf ("_______________________________________ \n");

    //Variável de número quebrado
    float c = 1.5;
    float d = 2.5;

    //%f corresponde aos números quebrados
    printf ("O valor de c é = %f \n \n", c);
    printf ("O valor de d é = %f \n \n", d);
    printf ("_______________________________________ \n");
    printf ("Soma de c + d = ");
    printf ("%f \n \n", c + d);
    printf ("Insira um outro valor para c \n");
    scanf("%f", &c);
    printf("O valor de c mudou para %f \n", c);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de c + d é = ");
    printf ("%f \n \n", c + d);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para d \n");
    scanf("%f", &d);
    printf("O valor de d mudou para %f \n", d);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de c + d é = ");
    printf ("%f \n \n", c + d);

    //Variável de letras
    char e = 'e';
    char f = 'f';

    //%c corresponde às letras
    printf ("O valor de e é = %c \n \n", e);
    printf ("O valor de f é = %c \n \n", f);
    printf ("_______________________________________ \n");
    printf ("Soma de e + f = ");
    printf ("%c \n \n", e + f);
    printf ("Insira um outro valor para e \n");
    fflush(stdin);
    scanf("%c", &e);
    printf("O valor de e mudou para %c \n", e);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de e + f é = ");
    printf ("%c \n \n", e + f);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para f \n");
    scanf("%c", &f);
    printf("O valor de f mudou para %c \n", f);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de e + f é = ");
    printf ("%c \n \n", e + f);

}
