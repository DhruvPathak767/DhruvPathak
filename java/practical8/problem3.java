package practical8;
class Mythread extends Thread{
    public void run()
    {
        for(int i=0;i<3;i++)
        {
            System.out.println("status="+isAlive());

        }
    }
}
public class problem3 {
    public static void main(String[] args) {
        Mythread t1=new Mythread();
        Mythread t2=new Mythread();
        Mythread t3=new Mythread();
        t1.start();
        System.out.println("status:"+ t1.isAlive());
        t2.start();
        try{
            t2.join();

        }
        catch(Exception e)
        {

        }
        System.out.println("status:"+ t1.isAlive());
        t3.start();
        System.out.println("status:"+ t1.isAlive());
    }
    
}
