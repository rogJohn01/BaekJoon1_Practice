import java.util.Scanner ; 
import java.util.* ; 


public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 

        
        
        int[] check = new int[31] ;
        

         for(int i =0 ; i < 28 ; i++){

            int n = sc.nextInt() ;
            check[n] = 1 ;
        
        }

        for(int i =0 ; i < 30 ; i++){
            if(check[i+1] ==0){

                System.out.println( i+1 ) ;
            }


    }
}}
