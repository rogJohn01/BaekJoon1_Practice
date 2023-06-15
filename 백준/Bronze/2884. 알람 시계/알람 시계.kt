fun main(){

    var (h , m) = readLine()!!.split(" ").map { it.toInt()}
    var m2 =0 
    if( m - 45 < 0){
         m2 = m +15
         h --  
        if(h <0){
        h = 23 
        }
    }
    else{
        m2 = m-45 
    }

        println("$h $m2")
    


}