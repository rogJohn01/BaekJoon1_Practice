import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList; 
import java.io.IOException; 

public class Main  {
    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ; 


        ArrayList<Integer> arr = new ArrayList<>() ; 

        int N = Integer.parseInt(br.readLine())  ;

        int maxv = -1 ; 
        int sumv = 0 ; 
        String[] line = br.readLine().split(" ");
        for (String str: line) {
            int n = Integer.parseInt(str) ; 
            if( n > maxv) maxv = n ;     
            arr.add(n) ;
            sumv += n ;  
        }
        float ans = ((float)sumv/maxv)*100/N;

        System.out.println(ans);


    }
}
