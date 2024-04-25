package practical3;

public class Elif {
    public static void main(String[] args) {
        int a=1,b=12,c=3;
        if (a>b && a>c) {
            System.out.println("a is max");
        }
        else if(b>a && b>c)
        {
            System.out.println("b  is max");
        }
        else{
            System.out.println("c is max");
        }
    }
}
