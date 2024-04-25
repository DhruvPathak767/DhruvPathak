public class Run{
public static void main(String a[])
{int x=12,b=0;
	try{
	int c=x/b;
	System.out.println("division="+c);
	}
	catch(ArithmeticException e){
	System.out.println(e);
	}
	
}
}
