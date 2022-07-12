#include <stdio.h>
using namespace std;

int main ()
{ 

float base, altura, area;
 printf ("Digite a base do triangulo: ");
 scanf ("%f%*c", &base);
 printf ("Digite o valor da altura do triangle: ");
 scanf ("%f%*c", &altura);
 
 area = (base*altura)/2;

 printf ("A area do triangulo e: %f", area);
     return 0;
}