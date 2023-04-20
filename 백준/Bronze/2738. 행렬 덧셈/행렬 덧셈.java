import java.util.Scanner ; 


public class Main  {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in) ; 
        int N = sc.nextInt() ;
        int M = sc.nextInt() ;

        
        int[][] A = new int[N][M] ; 

        for(int i=0 ; i < N ; i++){
            for(int j=0 ; j < M ; j++){
                A[i][j] = sc.nextInt() ;
            }
        }
        for(int x=0; x < N ; x++){
            for(int y=0 ; y< M  ; y++){
                A[x][y] += sc.nextInt() ; 
                System.out.print(A[x][y]+" "); 
            }
            System.out.println(""); 
        }
    }
}
