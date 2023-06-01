import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.io.IOException; 


public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 

        String str = br.readLine() ; 
        int[] amp = new int[26] ; 

        //System.out.println((int)'A');// 65
        //System.out.println((int)'Z');// 90
   
        for(char s: str.toCharArray()){
            amp[s-65] ++ ; 
        }

        Boolean stop = false ; 
        int odd = 0 ; 
        for(int i=0 ; i < 26 ; i++){
            //System.out.print( amp[i] + " ") ;
            if(amp[i] %2 ==1) odd ++ ;
            if(odd >=2){
                stop = true ; 
                System.out.println("I'm Sorry Hansoo");
                break ; 
            }
        }
        int l = 0 , r = str.length() -1 ;
        int[] ans = new int[str.length()] ; 

        if(!stop && str.length() >1 ){
            while(l<r){
                for(int i=0 ; i < 26 ; i++){
    
                
                    int tmp = amp[i] ;
                    while(tmp >0){
                        if(tmp>=2){
                            ans[l] = i ; 
                            ans[r] = i ; 
                            tmp -=2 ; 
                            l ++ ; r--; 
                        }else if(tmp ==1){
                            int m = str.length()/2 ; 
                            ans[m] = i ;
                            tmp -=1 ; 
                        }
        
                    }
        
                }
            } 

            for(var a:ans){
                System.out.print((char)(a+65));
            }
        }

      
     
        if(str.length()==1){
            System.out.println(str.charAt(0));
        }
        
    }
}
 
