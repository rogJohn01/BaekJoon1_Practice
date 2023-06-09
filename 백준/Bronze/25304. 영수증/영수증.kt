fun main(){
    val total = readLine()!!.toInt() 
    var N = readLine()!!.toInt()

    var account = 0 
    repeat(N){
        val (a, b ) = readLine()!!.split(" ").map { it.toInt() } 
        account += a*b 

    }
    if( total==account) println("Yes") else println("No")

}