package practical4;

import java.util.Scanner;

public class P3 {
     double a,b, c;
public double volume1()
{
    double vol=a*b*c;
    return vol;
}
    public static void main(String[] args) {
        P3 b1=new P3();
        P3 b2=new P3();
        System.out.println("enter three numbers for first box");
        Scanner sc=new Scanner(System.in);
        b1.a=sc.nextDouble();
        b1.b=sc.nextDouble();
        b1.c=sc.nextDouble();
        
        System.out.println("enter three numbers for first box");
        
        b2.a=sc.nextDouble();
        b2.b=sc.nextDouble();
        b2.c=sc.nextDouble();

      System.out.println("the volume of the first box= "+ b1.volume1());
      System.out.println("the volume of the second box= "+ b2.volume1());
    }
    
}
