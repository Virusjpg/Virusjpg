#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
float pre, venda, novo_pre;

printf ("Digite o valor do preco: ");
scanf ("%f%*c",&pre);
printf ("Digite o valor da venda media: ");
scanf ("%f%*c",&venda);

if (venda<500 || pre<30){
     novo_pre = pre+pre*10/100;

}
else if ((venda>=500 && venda <1200)||(pre>=30 && pre<80)){
     novo_pre = pre+pre*15/100;
}
else(venda>=1200 || pre>=80);{
     novo_pre = pre-pre*20/100;
}

printf ("O valor do novo preco será %3.1f", novo_pre);
return 0;
}