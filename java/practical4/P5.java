package practical4;
 import java.util.Scanner;

public class P5 {
   
    Scanner sc=new Scanner(System.in);
  double a,b,c;
  P5(double x,double y,double z)
  {
    a=x;
    b=y;
    c=z;
    System.out.println("the volume of the box is " + (a*b*c));
  }
   public static void main(String[] args) {
    P5 b1=new P5(1.32,1.25,2.31);
  P5 b2=new P5(4.59,2.31,3.147);
    
   }


    
}
