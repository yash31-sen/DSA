package swapNumbers;

public class SwapNumbers {
public static void main(String[] args) {
    int a=1;
    int b=2;
    int temp;
    // temp =a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    System.out.println(a+" "+b);
}
}