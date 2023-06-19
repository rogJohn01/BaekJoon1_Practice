import java.io.*

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val pw = PrintWriter(System.out)
    
    val n = br.readLine().toInt() 

    for (i in 0 until n) {
    var (a, b) = br.readLine()!!.split(" ").map { it.toInt()}
        pw.println(a+b) 
    }

    pw.flush() 
}