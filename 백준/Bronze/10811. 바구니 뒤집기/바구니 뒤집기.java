import java.util.Scanner ; 
import java.util.* ; 


public class Main  {

    static ArrayList<Integer> arr = new ArrayList<>(); 
    static int N , M ; 

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 


        N = sc.nextInt() ; 
        M = sc.nextInt() ; 

        for(int i=1 ; i <=N ; i++){
            arr.add(i) ; 
        }

        int a , b  ; 
        while(M-- >0){
            a = sc.nextInt();  
            b = sc.nextInt() ; 

            reverse(a-1,b-1) ; 
        }
        
        for(int i=0; i <N ; i++){
            System.out.print(arr.get(i)+" ") ; 
        }

    }

    public static void reverse(int l , int r){
        while(l <r){
            
            int tmp = arr.get(l) ;
            arr.set(l ,arr.get(r)) ; 
            arr.set(r ,  tmp)  ;
            
            l++  ; r--  ; 
        }

    }
}
