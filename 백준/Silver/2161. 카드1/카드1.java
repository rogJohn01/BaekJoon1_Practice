import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException; 

public class Main  {
    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ; 

        Queue<Integer> q = new LinkedList<>() ; 
        int N = Integer.parseInt( br.readLine() ) ; 
        for(int i=1 ; i <=N ; i++){
            q.add(i) ; 
        }

        ArrayList<Integer> ans = new ArrayList<>() ; 
        while( q.size() > 1  ){
            int a = q.poll()  ;
            ans.add(a) ; 
            int b = q.poll() ; 
            q.add(b) ;  

        }
        for(var a:ans){
            System.out.print(a+" ") ;
        }
        
        System.out.print(q.poll()) ; 

        

    }
}
