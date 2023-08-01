import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 
import java.util.ArrayList; 

public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));


        String line ; 
        ArrayList<String> lineBox = new ArrayList<>() ; 
        for(int i=0 ; i <5 ; i++){
            line = reader.readLine() ; 
            lineBox.add(line) ;
            
        }

        String ans ="" ;

        int ix = 0 ; 
        while(ix <=15){
            for(var s:lineBox){

            if(s.length() >ix){
                ans += s.charAt(ix) ;
                }
            }
            ix ++ ; 
        }
       

        System.out.println(ans);


    }
}
 