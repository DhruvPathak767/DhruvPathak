interface Demo{
void name();
void rollNo();
}
public class Interface implements Demo{
public void name()
{
System.out.println("my name is Dhruv Pathak");
}
public void rollNo()
{
System.out.println("my roll number is 258536");
}
public static void main(String a[])
{
Interface i=new Interface();
i.name();
i.rollNo();
}
}