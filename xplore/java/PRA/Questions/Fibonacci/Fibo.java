package Fibonacci;
import java.math.BigInteger;
public class Fibo {
    public static void main(String[] args) {
        int n = 210;
        BigInteger[] arr = new BigInteger[n + 1];
        arr[0] = BigInteger.ZERO;
        arr[1] = BigInteger.ONE;
        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i - 1].add(arr[i - 2]);
        }
        System.out.println(arr[n]); // 210th Fibonacci Number
    }
}
