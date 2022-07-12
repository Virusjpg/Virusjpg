import java.util.*;

public class Exercício_13 {
 public static void main (String[] args){
 Float num, calc1, calc2, calc3, calc4, calc5, calc6, calc7, calc8, calc9, calc10, calc11;

 Scanner calculo = new Scanner (System.in);
 System.out.println ("Digite o valor do número: ");
 num = calculo.nextFloat();
  
 /*Não sei um comando para fazer a conta sem ser deixe jeito (por enquanto) :p */
 
 calc1 = num*0;
 calc2 = num*1;
 calc3 = num*2;
 calc4 = num*3;
 calc5 = num*4;
 calc6 = num*5;
 calc7 = num*6;
 calc8 = num*7;
 calc9 = num*8;
 calc10 = num*9;
 calc11 = num*10;

 System.out.println ("Tabuada:");
 System.out.println ("/Valor/ * 0 = "+ calc1);
 System.out.println ("/Valor/ * 1 = "+ calc2);
 System.out.println ("/Valor/ * 2 = "+ calc3);
 System.out.println ("/Valor/ * 3 = "+ calc4);
 System.out.println ("/Valor/ * 4 = "+ calc5);
 System.out.println ("/Valor/ * 5 = "+ calc6);
 System.out.println ("/Valor/ * 6 = "+ calc7);
 System.out.println ("/Valor/ * 7 = "+ calc8);
 System.out.println ("/Valor/ * 8 = "+ calc9);
 System.out.println ("/Valor/ * 9 = "+ calc10);
 System.out.println ("/Valor/ * 10 = "+ calc11);

 calculo.close();
}
}
