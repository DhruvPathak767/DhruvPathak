
package practical8;
class Thread1 implements Runnable{
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
 class thread2 implements Runnable
  {
public void run()
{
    for(int i=0;i<5;i++)
    {
        System.out.println("thread2 :" + i);
    }
}
    
}
public class Problem2 {
    public static void main(String[] args) {
        thread2 t2=new thread2();
        Thread1 t1=new Thread1();
        Thread t3=new Thread(t1);
        Thread t4=new Thread(t2);
        t3.start();
        t4.start();
    }
}

