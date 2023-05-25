import java.util.Scanner ; 
import java.util.* ; 


public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 



        Map<Integer,Integer> mp = new HashMap<>() ; 
        for(int i=0 ; i < 10 ; i++){
            int n = sc.nextInt() % 42 ; 
            
            if(mp.containsKey(n)){
                mp.put(n , mp.get(n)+1 ) ; 
            } else {
                mp.put(n , 1) ; 
             }

        }

        System.out.println( mp.size() );
    }
}
