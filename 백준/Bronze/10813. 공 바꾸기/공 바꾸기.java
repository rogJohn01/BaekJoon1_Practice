import java.util.Scanner ; 



public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 


        int[] arr = new int[101] ; 
        int N = sc.nextInt() ; 
        int M = sc.nextInt() ; 
        for(int i=1 ; i <= N ; i++){
            arr[i] = i ; 
        }
        while(M >0){
             M -- ; 
            int a = sc.nextInt(); 
            int b = sc.nextInt() ; 
            int tmp = arr[a] ; 
            arr[a] = arr[b] ; 
            arr[b] = tmp ; 
        }
        for(int i=1 ; i <=N ; i++){
            System.out.print(arr[i]+ " ") ; 
        }

    }
}
