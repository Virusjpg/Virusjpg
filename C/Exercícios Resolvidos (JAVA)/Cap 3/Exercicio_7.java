import java.util.Scanner;

public class Exercicio_7 {
 public static void main (String[] args){
 Float x, imp; 
 
 Scanner salario = new Scanner(System.in);

 System.out.println ("Digite o salário: ");
 x=salario.nextFloat();
  
 imp = x*10/100;

 Float saltotal = x + 50 - imp;
 System.out.println ("O valor total é: "+ saltotal);

 salario.close();
}
} 