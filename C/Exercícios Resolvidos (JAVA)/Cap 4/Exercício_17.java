import java.util.Scanner;
import java.lang.Math;

/*Faça um programa que calcule a equação do 2° grau. */

public class Exercício_17{
 public static void main(String[] args) {
 Float a, b, c, delta, x1, x2;
 

 Scanner calculo = new Scanner (System.in);
 
 System.out.println ("Digite o valor de a: ");
 a = calculo.nextFloat();
 System.out.println ("Digite o valor de b: ");
 b = calculo.nextFloat();
 System.out.println ("Digite o valor de c: ");
 c = calculo.nextFloat();

 delta = (float) Math.pow(b, 2) - (4*a*c); 

 if (delta < 0) {
 System.out.println("Delta é menor que 0. Não existe raiz real");}

 else if (delta == 0){
 System.out.println ("Existe uma raiz real: ");
 x1 = (-b)/(2*a);
 System.out. println (x1);
}
 else{
 System.out.println ("Existem duas raizes reais: ");
 x1 = (float) ((-b + Math.sqrt(delta))/(2*a));
 x2 = (float) ((-b - Math.sqrt(delta))/(2*a));
 System.out.println (x1);
 System.out.println (x2);
}

calculo.close();
}
}