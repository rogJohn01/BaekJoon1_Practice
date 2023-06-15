import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {

    static int ax , ay ;
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ;
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine()) ; 
        int call = Integer.parseInt(br.readLine()) ; 


        ArrayList<ArrayList<Integer>> mat = new ArrayList<ArrayList<Integer>>();

        for (int i = 0; i < N; i++) {
            ArrayList<Integer> newRow = new ArrayList<Integer>();
    
            for (int j = 0; j < N; j++) {
                newRow.add(0);
            }
            mat.add(newRow);
        }
        ax = N/2+1 ; ay = N /2+1 ; 
       roller(N,call , mat);
       

        for(int r=0 ; r < N ; r++){
            for(int c=0 ; c < N ; c++){
                bw.write(mat.get(r).get(c)+" ");
            }
            bw.write("\n");
        }
        bw.write(ax+" "+ay + "\n");
        bw.flush();

    }

    public static void roller(int N, int call , ArrayList<ArrayList<Integer>> mat  ){

        int[] dx ={-1,0,1,0} ;
        int[] dy ={0,1,0,-1} ; 

        boolean stop = false ; 
        int ix = 2 ; 
        int d = 0 ; 
        int move = 1; 
        int x = N/2 , y = N /2 ; 
        mat.get(x).set(y,1) ; 

        while(ix !=N*N){

            for(int a =0 ; a < 2 ; a++){
                for(int m=0 ; m < move ; m++){
                    x += dx[d] ; 
                    y += dy[d] ; 
                    mat.get(x).set(y,ix) ; 
                    if(call ==ix){
                        ax = x+1 ; 
                        ay = y+1 ; 
                    }
                    ix ++ ; 
                    if(ix > N*N) return ;
                }
                d = (d+1)%4 ; 
            }
            move++ ; 
        }
        return ; 
    }
}
