import java.util.Stack ; 

class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        
        Stack<Integer> st = new Stack<Integer>() ; 
        for(int ix = 0 ; ix < prices.length ; ix ++){
            
            while( !st.empty() && prices[st.peek()] > prices[ix]){
                int tday = st.pop();
                answer[tday] = ix - tday;
            }
            st.push(ix) ;
        }
        while(!st.empty()){
                int tday = st.pop();
            answer[tday] = prices.length - tday - 1;
        }
        
        
        return answer;
    }
}