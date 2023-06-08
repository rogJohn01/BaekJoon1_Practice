fun main(){
    var N = readLine()!!.toInt()

    repeat(N){
        val (a, b ) = readLine()!!.split(" ").map { it.toInt() } 
        println(a+b)

    }


}
