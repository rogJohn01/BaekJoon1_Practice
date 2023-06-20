import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 
import java.util.* ; 

public class Main  {

    static int[][] mat = new int[51][51] ; 

    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 

        StringTokenizer st = new StringTokenizer(br.readLine());

        int R = Integer.parseInt(st.nextToken()) ; 
        int C = Integer.parseInt(st.nextToken()) ;



        for(int i=0; i < R ; i++){
            String sline = br.readLine() ;
            for(int j =0 ; j < C ; j++){
                mat[i][j] = Integer.parseInt(String.valueOf(sline.charAt(j)) ) ; 
            }
        }



        int ans =1 ; 
        for(int x1 =0 ; x1 < R  ; x1++ ){
            for(int x2 = x1+1 ; x2 < R ; x2++){
        
                for(int y1=0; y1 < C ; y1++){
                    for(int y2 =0 ; y2 < C ; y2++){
                        
                    ans = Math.max(ans , check(x1,x2,y1,y2)) ; 
        
                    }
                }
            }
        }
        System.out.println(ans);


    }
    public static Integer check(int x1 , int x2 , int y1 , int y2){
            
            if( (x2-x1) != (y2-y1)) return -1 ; 

            ArrayList<Integer> arr = new ArrayList<Integer>() ; 
            arr.add(mat[x1][y1]) ; arr.add(mat[x1][y2] ) ; arr.add(mat[x2][y1]) ; arr.add(mat[x2][y2]) ; 
            for(var a:arr){
                if( a != mat[x1][y1]){
                    return -1 ; 
                }
            }
            return (x2-x1+1)*(y2-y1+1) ; 

        }

    

}
 
