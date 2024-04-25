package practical7;
class a{
    public void show()
    {
        System.out.println("show a");
    }
}
public class MethodOverriding  extends a{
    public void show()
    {
        System.out.println("show Methodoverriding class");
    }
    public static void main(String[] args) {
        MethodOverriding n=new MethodOverriding();
        a aa=new a();
        aa.show();
        n.show();
    }
}
