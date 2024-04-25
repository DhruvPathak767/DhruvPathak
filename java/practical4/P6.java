package practical4;

import java.util.Scanner;

public class P6 {
     Scanner sc=new Scanner(System.in);
  double a,b,c;
  P6(double a,double b,double c)
  {
    this.a=a;
    this.b=b;
    this.c=c;
    
    System.out.println("the volume of the box is " + (a*b*c));
  }
   public static void main(String[] args) {
    P6 b1=new P6(1.32,1.25,2.31);
  P6 b2=new P6(4.59,2.31,3.147);
    
}
}
