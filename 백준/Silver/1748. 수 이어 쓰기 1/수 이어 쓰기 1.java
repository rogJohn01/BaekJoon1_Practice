import java.util.Scanner ; 



public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 

        
        int N = sc.nextInt() ; 

        int nlen = Integer.toString(N).length() ;

        
        int ans =0 ; 
        int x = 9 ;
        for(int i=1  ; i < nlen ; i++){
            if(i >1) x *=10 ;
            ans += x*i ; 
        }

        if(N != Math.pow(10, nlen-1)){
            ans += (N- Math.pow(10, nlen-1)+1 )*nlen ; 
        } else {
            ans += nlen ;
        }
        System.out.println(ans) ; 
    }
}
