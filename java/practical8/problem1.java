package practical8;
class Thread1 extends Thread{
public void run()
{
    for(int i=0;i<5;i++)
    {
        System.out.println("thread1 :" + i);

    }
}
}
/**
   thread2 extends Thread{\
}
 */
 class thread2 extends Thread
  {
public void run()
{
    for(int i=0;i<5;i++)
    {
        System.out.println("thread2 :" + i);
    }
}
    
}
public class problem1 {
    public static void main(String[] args) {
        thread2 t2=new thread2();
        Thread1 t1=new Thread1();
        t1.start();
        t2.start();
    }
}
