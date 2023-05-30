import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;


import java.io.IOException; 


public class Main  {
    public static void main(String[] args)  throws IOException {
        
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in)) ; 


        ArrayList<Integer> arr = new ArrayList<>() ; 
        HashMap<Integer,Integer> mp = new HashMap<>() ; 

        int sumv = 0  , maxv = -5000 , minv = 5000 ; 
        int N = Integer.parseInt(br.readLine())  ;
        for(int i = 0; i < N ; i++){
            int n = Integer.parseInt(br.readLine()) ; 
            arr.add(n) ;
            sumv += n ;  
            mp.put(n , mp.getOrDefault(n,0)+1 ) ;
            if(maxv < n ) maxv = n ; 
            if(minv > n)  minv = n ; 
         }
        Collections.sort(arr) ; 
        
        double average = (double) sumv / arr.size();
        long arim  = Math.round(average);

        int m = N/2 ; 
        int median = arr.get(m) ;

        int mode = -5000 ; 
        ArrayList<Integer> record = new  ArrayList<>() ; 
        int maxValue  = -1 ; 
        for(var key: mp.keySet()){
           
            if( mp.get(key) > maxValue ) {
                maxValue = mp.get(key) ;
            }
        }
        for(var key: mp.keySet()){
            if(maxValue == mp.get(key)) record.add(key) ; 
        }

        Collections.sort(record) ; 
        //System.out.println("record: "+ record);

        if( record.size() > 1) mode = record.get(1) ;  
        else mode = record.get(0) ; 

        System.out.println(arim);
        System.out.println(median);
        System.out.println(mode );
        System.out.println(maxv-minv);
     
    }
}
 
