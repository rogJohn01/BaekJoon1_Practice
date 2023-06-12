fun main(){

    var x = readLine()!!.toInt() 


    var s = ""
    var rep = x/4 

    for(i in 1..rep){
        s+= "long "
    }
    s+="int"
    println(s)



}