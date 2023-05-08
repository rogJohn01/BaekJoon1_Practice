import java.util.Scanner ; 
import java.util.* ; 

public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 

       

        ArrayList<Integer> arr = new ArrayList<>() ; 

        for(int i =0 ; i < 9 ; i++){
            int n = sc.nextInt() ; 
            arr.add(n) ;
        }
        int maxv = -1 ; 
        int max_ix = 0 ; 
        for(int i =0 ; i < 9 ; i++){
            if(arr.get(i) > maxv){
                maxv = arr.get(i) ;
                max_ix = i+1 ; 
            }
        }
        System.out.println(maxv) ;
        System.out.println(max_ix) ; 

    }
}
