import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.StringTokenizer;
import java.io.IOException; 
import java.util.Stack;
import java.util.Collections;

public class Main {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 
        ArrayList<Integer> arr = new ArrayList<>() ; 

        int N = Integer.parseInt(br.readLine()); 

        String[] line = br.readLine().split(" ");
        for (String str: line) {
            int n = Integer.parseInt(str) ; 
            arr.add(n) ;
        }

        //System.out.println(arr);
        Stack<Integer> st = new Stack<>() ; 
        ArrayList<Integer> ans = new ArrayList<>(Collections.nCopies(N, -1));

        for(int i =0 ; i < arr.size() ; i++){
            int a = arr.get(i) ; 
            while( !st.isEmpty() &&  arr.get(st.peek()) < a ){
                int ix = st.pop() ; 
                ans.set(ix ,a ) ;  
            
            }
            st.add(i) ; 
        }

         BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    for(int i = 0; i < ans.size(); i++) {
        bw.write(ans.get(i) + (i < ans.size() - 1 ? " " : "\n"));
    }
    bw.flush();
    }
}
