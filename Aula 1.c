#include <stdio.h>
#include <stdlib.h>
//Idioma local
#include <locale.h>

//Fun��o principal do programa
void main(){

    //Idioma local
    setlocale(LC_ALL,"");

    //Imprime na tela
    printf("Estou aprendendo programa��o! \n \n");

    //Vari�vel de n�mero inteiro
    int a = 1;
    int b = 2;

    //%d corresponde aos n�meros inteiros
    printf ("O valor de a � = %d \n \n", a);
    printf ("O valor de b � = %d \n \n", b);
    printf ("_______________________________________ \n");
    printf ("Soma de a + b = ");
    printf ("%d \n \n", a + b);
    printf ("Insira um outro valor para a \n");
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de a + b � = ");
    printf ("%d \n \n", a + b);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para b \n");
    scanf("%d", &b);
    printf("O valor de b mudou para %d \n", b);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de a + b � = ");
    printf ("%d \n \n", a + b);
    printf ("_______________________________________ \n");

    //Vari�vel de n�mero quebrado
    float c = 1.5;
    float d = 2.5;

    //%f corresponde aos n�meros quebrados
    printf ("O valor de c � = %f \n \n", c);
    printf ("O valor de d � = %f \n \n", d);
    printf ("_______________________________________ \n");
    printf ("Soma de c + d = ");
    printf ("%f \n \n", c + d);
    printf ("Insira um outro valor para c \n");
    scanf("%f", &c);
    printf("O valor de c mudou para %f \n", c);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de c + d � = ");
    printf ("%f \n \n", c + d);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para d \n");
    scanf("%f", &d);
    printf("O valor de d mudou para %f \n", d);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de c + d � = ");
    printf ("%f \n \n", c + d);

    //Vari�vel de letras
    char e = 'e';
    char f = 'f';

    //%c corresponde �s letras
    printf ("O valor de e � = %c \n \n", e);
    printf ("O valor de f � = %c \n \n", f);
    printf ("_______________________________________ \n");
    printf ("Soma de e + f = ");
    printf ("%c \n \n", e + f);
    printf ("Insira um outro valor para e \n");
    fflush(stdin);
    scanf("%c", &e);
    printf("O valor de e mudou para %c \n", e);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de e + f � = ");
    printf ("%c \n \n", e + f);
    printf ("_______________________________________ \n");
    printf ("Insira um outro valor para f \n");
    scanf("%c", &f);
    printf("O valor de f mudou para %c \n", f);
    printf ("_______________________________________ \n");
    printf ("Agora, a soma de e + f � = ");
    printf ("%c \n \n", e + f);

}
