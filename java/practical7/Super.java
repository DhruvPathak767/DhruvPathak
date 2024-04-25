package practical7;
class maa{
    public maa()
    {
        System.out.println("super class constructor");
    }
}


public class Super extends maa {
    public Super()
    {
        super();
        System.out.println("sub class constructor");
    }
    public static void main(String[] args) {
        Super s=new Super();
    }
    
}
