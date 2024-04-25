package practical4.practiceset1;


/**
 * P
 */
 import java.util.Scanner;


public class P1 {
    double a,b, c;
public void volume()
{
    
    System.out.println("the volue of box is " + (a*b*c));
}
    public static void main(String[] args) {
        P1 b1=new P1();
        P1 b2=new P1();
        System.out.println("enter three numbers for first box");
        Scanner sc=new Scanner(System.in);
        b1.a=sc.nextDouble();
        b1.b=sc.nextDouble();
        b1.c=sc.nextDouble();
        
        System.out.println("enter three numbers for first box");
        
        b2.a=sc.nextDouble();
        b2.b=sc.nextDouble();
        b2.c=sc.nextDouble();
        b1.volume();
        b2.volume();
    }
}