package DuplicatesFromArray;

public class ReverseNumber {
    public static void main(String[] args) {
        int n = 120;
        int ans = 0;
        int trailingZeros = 0;

        while (n % 10 == 0) {  // Count trailing zeros
            trailingZeros++;
            n /= 10;
        }

        while (n != 0) {
            int rem = n % 10;
            ans = rem + ans * 10;
            n = n / 10;
        }

        for (int i = 0; i < trailingZeros; i++) {
            System.out.print("0"); 
        }
        System.out.print(ans);
    }
}
