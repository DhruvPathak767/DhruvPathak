interface Parent{
void show();
void display();
interface Child{
void seen();
}
}
public class Nested implements Parent.Child{
public void show()
{
System.out.println("show parent");
}
public void display()
{
System.out.println("display parent");
}
public void seen()
{
System.out.println("seen Child");
}
public static void main(String a[])
{
Nested n1=new Nested();
n1.show();
n1.display();
n1.seen();
}
}