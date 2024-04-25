import java.util.Scanner;

/**
 * Mulcatch
 */
public class Mulcatch {

    public static void main(String[] args) {
        int a,b,c;
        Scanner sc=new Scanner(System.in);
        try{
            a=sc.nextInt();
            b=sc.nextInt();
            c=a/b;
            System.out.println("c="+c);
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}