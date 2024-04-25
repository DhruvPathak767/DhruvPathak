package practical7;
class E1{
    int x=10;
}
public class hidden extends E1 {
    public  int add(int x)
    {
        return super.x+x;
    }
    public static void main(String[] args) {
        hidden h=new hidden();
       System.out.println(h.add(12));
    }
}
