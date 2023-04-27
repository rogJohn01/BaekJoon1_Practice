class Solution {
    public long solution(int w, int h) {
        long _gcd = gcd(w,h) ;
        
        return ((long)w*h) - (w+h -_gcd) ;
    }

    private int gcd(int a, int b){

        while(b !=0){
            int v = a % b ; 
            a = b ;
            b = v ; 
        }
        return a ; 
    }

}
