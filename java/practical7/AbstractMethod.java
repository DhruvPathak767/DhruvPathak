package practical7;
abstract class A{
    abstract void name();
    abstract void rollNo();
}
public class AbstractMethod  extends A{
    @Override
    void name() {
        System.out.println("my name is Dhruv");
        
    }
    @Override
    void rollNo() {
        System.out.println("my rollno is 1234");
    }
    public static void main(String[] args) {
        AbstractMethod a=new AbstractMethod();
        a.name();
        a.rollNo();
    }
}
