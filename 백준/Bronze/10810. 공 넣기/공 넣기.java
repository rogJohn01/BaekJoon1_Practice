import java.util.Scanner ; 



public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 


        int N = sc.nextInt() ; 
        int M = sc.nextInt() ; 
        int i , j , k ; 
        int[] arr = new int[101] ; 


        for(int x= 0 ; x < M ; x++){
            i = sc.nextInt() ; 
            j = sc.nextInt() ; 
            k = sc.nextInt() ; 
            
            for(int y=i ; y <=j ; y++){
                arr[y] = k ; 
            }
            
        }
        for(int a =1 ; a <=N ; a++){
            System.out.print(arr[a]+" ") ; 
        }


    }
}
