package practical4.practiceset1;
public class first {
    static int count;
    int co;
    public void getcount()
    {
        count++;
        co++;
    }
    static public void setcount()
    {
        System.out.println(count);
    }
    void setco()
    {
        System.out.println(co);
    }
static{
    count=1;
}
    public static void main(String[] args) {
        first f1=new first();
        first f2=new first();
        f1.getcount();
        f1.setcount();
        f1.setco();
        f2.getcount();
        f2.setcount();
        f2.setco();
    }
}
