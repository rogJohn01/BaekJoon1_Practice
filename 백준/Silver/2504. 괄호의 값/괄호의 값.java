import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException; 
import java.util.HashMap;
import java.util.Stack; 

public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 


        String s = br.readLine() ; 

        HashMap<Character, Character>  mp = new HashMap<>() ; 
        mp.put(']', '[');
        mp.put(')', '(');
        Stack<Integer> st = new Stack<>() ; 
        st.push(0) ; 
        Stack<Character> st2 = new Stack<>() ; 
        for(int i =0 ; i < s.length() ; i++){
            char e = s.charAt(i) ; 
            if( e=='(' || e=='['){
                st.push(0) ; 
                st2.push(e) ; 
            }else {
                
                if(  st2.empty()  || st2.peek() != mp.get(e)){
                    System.out.println(0);
                    return ; 
                }
                st2.pop() ;

                int v = st.pop() ; 

                if(e==')'){
                    int vv = st.pop() ; 
                    st.push( vv + Math.max(v*2 ,2)) ; 
                }else {
                    int vv = st.pop() ; 
                    st.push(vv+ Math.max(v*3 , 3)) ; 
                }

            }
        }

        if(st2.size() != 0){
            System.out.println(0);
        }else {
            System.out.println( st.pop());

        }


    }
}
 
