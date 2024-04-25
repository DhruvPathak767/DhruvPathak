package practical4;
import java.util.Scanner;
public class P4 {
    Scanner sc=new Scanner(System.in);
   public double volume2(double a,double b,double c)
   {
    return (a*b*c);
   }
   public static void main(String[] args) {
    P4 b1=new P4();
  P4 b2=new P4();
    System.out.println("enter three numbers for first box");
    Scanner sc=new Scanner(System.in);
    double v1=sc.nextDouble();
    double v2=sc.nextDouble();
    double v3=sc.nextDouble();
    
    System.out.println("enter three numbers for second box");
    
    double v4=sc.nextDouble();
    double v5=sc.nextDouble();
    double v6=sc.nextDouble();

  System.out.println("the volume of the first box= "+ b1.volume2(v1,v2,v3));
  System.out.println("the volume of the second box= "+ b2.volume2(v4,v5,v6));
   }
}
