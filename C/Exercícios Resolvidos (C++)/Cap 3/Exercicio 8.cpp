#include <stdio.h>
using namespace std;

int main()
{
float dep, taxa, rend, total;
 
 printf ("Digite o valor do deposito: ");
 scanf ("%f%*c",&dep);
 printf ("Digite o valor da taxa: ");
 scanf("%f%*c",&taxa);
 
 rend = dep*taxa/100;
 total = dep + rend;
 
 printf ("O valor do rendimento sera: %f", rend);
 printf ("\nO valor total sera: %f", total);
     return 0;

}