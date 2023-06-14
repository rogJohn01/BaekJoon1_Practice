import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


import java.io.IOException; 


public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 

        Map<Integer, List<Integer >> map = new HashMap<>();
    
        int[][] mat = new int[5][5] ;
        ArrayList<Integer> nums = new ArrayList<>();

        for(int i =0 ; i < 5 ; i++){
            String[] line = br.readLine().split("\\s+"); 
            for(int j =0 ; j < 5 ; j++){
                mat[i][j] = Integer.parseInt(line[j]) ; 
                map.put(Integer.parseInt(line[j]) , Arrays.asList(i,j)) ; 
            }
        }

        for(int a= 0 ; a < 5 ; a++){
            String[] line = br.readLine().split("\\s+");
            for(var l:line){
                nums.add(Integer.parseInt(l)) ; 
            }
        }

        //for(var n:nums) System.out.print(n+" ");
        int ans = 0 ; 
        int[] rows = new int[5] ; 
        int[] cols = new int[5] ; 
        int[] diag = new int[2] ; 
        for(int i = 0 ; i < nums.size() ; i++){
            int n = nums.get(i) ;
            List<Integer> xy = map.get(n) ;
            int x = xy.get(0) ;
            int y = xy.get(1) ;

        


            rows[x]++ ;
            if(rows[x]==5){
                            ans ++ ; 

            }
            cols[y]++ ;
            if(cols[y]==5){
               ans ++ ; 
            }
            if(x==y){
                diag[0] ++ ;
                if(x==2 && y==2){
                    diag[1]++ ; 
                    if(diag[1]==5){
                                   ans ++ ; 

                }
                }
                if(diag[0]==5){
                                   ans ++ ; 

                }
            }else if(x+y==4){
                diag[1] ++ ; 

                if(x==2 && y==2){
                    diag[0]++ ; 
                    if(diag[0]==5){
                                  ans ++ ; 

                }
                }
                if(diag[1]==5){
                                   ans ++ ; 

                }

            }
            if(ans >=3){
                System.out.println(i+1);
                return ; 
            }
        }





    }
}
 
