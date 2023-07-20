
fun main() {
    val (a, b, c ) = readLine()!!.split(" ").mapNotNull { it.toLongOrNull() }

    
    println(a+b+c)
}

