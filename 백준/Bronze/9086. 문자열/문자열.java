import java.util.Scanner ; 


public class Main  {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ; 


        int T = sc.nextInt() ; 
        while(T-- >0){
            
            String s = sc.next(); 
            String first = String.valueOf(s.charAt(0)) ; 
            String last = String.valueOf(s.charAt(s.length()-1)) ;
            System.out.println( first+last  ) ;


        }
        sc.close() ; 




        


    }
}
