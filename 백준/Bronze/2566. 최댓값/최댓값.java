import java.util.Scanner ; 


public class Main  {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in) ; 

        int N = 9 ; 
        int mat[][] = new int[10][10] ; 

        int maxv = -1 ;
        int max_x = 0 ; 
        int max_y = 0 ; 



        for(int r=0; r < N ; r++){
            for(int c=0; c < N ; c++){
                mat[r][c] = sc.nextInt() ; 
                if(mat[r][c] > maxv ){
                    maxv = mat[r][c] ;
                    max_x = r ; 
                    max_y = c ;
                }
            }
        }
        System.out.println(maxv); 
        System.out.println((max_x+1)+" "+ (max_y+1) ); 
    }
}
