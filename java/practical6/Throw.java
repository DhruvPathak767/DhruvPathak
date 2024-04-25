class myexception extends Exception{
    public String toString(){
        return super.toString() + "negative number occurs";
    }
}
public class Throw {
    public static void main(String[] args) throws myexception {
        int a=-10;
        if (a<0)
        {
            try{
                throw new myexception();
            }
            catch(myexception e)
            {
                System.out.println(e);
            }
           
        } 
            
        
    }
}
