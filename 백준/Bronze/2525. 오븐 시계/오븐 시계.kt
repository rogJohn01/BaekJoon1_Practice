fun main() {
    val input = readLine()!!.split(" ")
    var hour = input[0].toInt()
    var minute = input[1].toInt()
    val extra = readLine()!!.toInt()

    minute += extra
    while (minute >= 60) {
        hour += minute /60
        minute %= 60
    }
    hour %= 24

    println("$hour $minute")
}
