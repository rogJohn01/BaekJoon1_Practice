import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 


public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 

        int N = Integer.parseInt(br.readLine()) ; 

        int cnt = 1 , x=666 ; 
        while(N != cnt ){

            x ++ ;  
            String sx = Integer.toString(x ) ;
            int six = 0 ; 
            for(char s:sx.toCharArray()){
                if( s=='6'){
                    six ++ ;
                    if(six ==3){
                        cnt ++ ; 
                        break ; 
                    } 
                }else{
                    six =0 ; 
                }
            }



        }
        System.out.println(x);



    }
}
 
