import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 


public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 

        long N = Long.parseLong(br.readLine()); 

        long x = 0 ;
        while(N >=0){
            x ++ ; 
            N -= x ; 


        }
        System.out.println(x -1 ) ;



    }
}
 
