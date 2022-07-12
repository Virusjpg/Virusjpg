#include <stdio.h>
using namespace std;

int main()
{
float sal, percentual, aumento, novosal;

 printf ("Insira o salario: ");
 scanf ("%f%*c", &sal);
 printf ("Insira o percentual a ser adiocionado: ");
 scanf ("%f%*c", &percentual);
 
 aumento = sal*percentual/100;
 novosal = sal+aumento;
  
 printf ("O novo salario sera: %f",novosal);
    
     return 0;
}