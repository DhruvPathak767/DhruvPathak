package practical3;

public class Pattern {    public static void main(String[] args) {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                System.err.print(i*i+j+2-i);
            }
            System.out.println();
        }
    }
    
}
