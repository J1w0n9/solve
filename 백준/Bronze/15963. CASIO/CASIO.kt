fun main() {
    val (n, m) = readLine()!!.split(" ").map { it.toLong() }
    if (n == m) println(1) else println(0)
}