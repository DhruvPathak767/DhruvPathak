package practical4.practiceset1;

public class second {
    int x;
    // public void getx(int x)
    // {
    //     this.x=x;
    // }
    public void setx()
    {
        System.out.println(x);
    }
second()
{
    System.out.println("constructor is called");

}
second(int x)
{
    this.x=x;
}
    public static void main(String[] args) {
        second s1=new second(10);
        // s1.getx(12);
         s1.setx();
    }
    
}
