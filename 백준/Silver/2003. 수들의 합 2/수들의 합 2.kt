fun main() {

    val (N, M ) = readLine()!!.split(" ").map { it.toInt() } 
    val arr = readLine()!!.split(" ").map { it.toInt() } 

    var ans = 0 ; 
    for (x in 0 until N) {
        var pre = arr[x] ;
        if(pre ==M){
            ans++ 
            continue ; 
        }
        for (y in (x+1) until N) {
            pre += arr[y] ;
            if(pre ==M){
                ans ++ ; 
                break ; 
            } 
        }
    }
    println(ans) 

}

