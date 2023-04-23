import java.util.Scanner ; 
import java.util.ArrayList ; 

public class Main  {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in) ; 

        int N = sc.nextInt() ; 
        ArrayList<Integer> arr = new ArrayList<Integer>() ;  
        for(int i= 0 ; i < N ; i++){
            int n = sc.nextInt() ;
            arr.add(n);
        }


        int tar = sc.nextInt() ; 
        int ans = 0 ; 
        for(int a:arr){
            if(tar ==a){
                ans ++ ; 
            }
        }
        System.out.println(ans ); 

    }
}
