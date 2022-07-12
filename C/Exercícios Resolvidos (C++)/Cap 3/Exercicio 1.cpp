#include <stdio.h>
int main()
{
int a,b,c,d,soma;

printf("Digite o primeiro numero: ");
scanf ("%d%*c",&a);
printf ("Digite o segundo numero: ");
scanf ("%d%*c",&b);
printf ("Digite o terceiro numero: ");
scanf ("%d%*c",&c);
printf ("Digite o quarto numero: ");
scanf ("%d%*c",&d);

soma = a+b+c+d;
printf ("O valor da soma sera igual a: %d", soma);

return 0;
}