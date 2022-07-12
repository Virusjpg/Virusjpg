#include <stdio.h>
#include <math.h>
using namespace std;

/*A nota fincal de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um 
trabalhador de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas 
obedece aos pesos a seguir:

 Trabalho de laboratório - Peso 2
 Avaliação semestral - Peso 3
 Exame final - Peso 5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:

 8 --> 10, conceito A
 7 --> 8,  conceito B
 6 --> 7,  conceito C
 5 --> 6,  conceito D
 0 --> 5,  conceito E*/

int main()
{
float nota_trab, aval_sem, exame, media;

 printf ("Digite a nota do trabalho de laboratório: ");
 scanf ("%f%*c",&nota_trab);
 printf ("Digite a nota da avaliação semestral: ");
 scanf ("%f%*c",&aval_sem);
 printf ("Digite a nota do exame final: ");
 scanf ("%f%*c",&exame);
 
 media = (nota_trab*2+aval_sem*3+exame*5)/10;
 printf ("Media ponderada: %3.1f", media);
 if (media >= 8 && media <= 10)
     printf ("\nObteve conceito A");
 if (media >= 7 && media <= 8)
     printf ("\nObteve conceito B");
 if (media >=6 && media <= 7)
     printf ("\nObteve conceito C");
 if (media >= 5 && media < 6)
     printf ("\nObteve conceito D");
 if (media >= 0 && media < 5)
     printf ("\nObteve conceito E");

 return 0;
}
