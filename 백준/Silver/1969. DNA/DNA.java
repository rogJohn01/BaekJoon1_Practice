import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 

import java.util.ArrayList;

public class Main  {
    static int N , M ; 

    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 
        String[] dim = br.readLine().split(" ");
        N = Integer.parseInt(dim[0]);
        M = Integer.parseInt(dim[1]);

        ArrayList<String> arr = new ArrayList<>() ; 
        int maxv = 0 , hd = 0 ; 
        for(int i=0 ; i < N ; i ++ ){
            arr.add(br.readLine()) ; 

        }

        for(int i=0; i < M ; i++){
            int a =0 , t =0 , g =0 , c = 0 ; 
            for(int j=0 ; j < N ; j++){
                switch(arr.get(j).charAt(i)){
                    case 'A': a++ ; break ; 
                    case 'T': t++ ; break ; 
                    case 'G': g++ ; break ; 
                    case 'C': c++ ; break ; 
                }
            }
             maxv = Math.max(a>c?a:c , g>t?g:t) ;
            hd += (N-maxv) ; 
            System.out.print(helper(a,t,g,c,maxv)) ;
        }
        System.out.println("\n"+hd);

    }
    private static char helper(int a , int t , int g, int c, int maxv){
        if(maxv==a) return 'A' ;
        else if(maxv==c) return 'C'; 
        else if(maxv==g) return 'G' ;
        else return 'T' ; 
    }
}
 
