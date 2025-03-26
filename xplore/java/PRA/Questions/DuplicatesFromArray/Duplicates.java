package DuplicatesFromArray;
import java.util.Arrays;

public class Duplicates {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 1, 2, 3, 4, 5, 54, 54, 7, 8, 9, 1, 1, 1, 1, 2, 2, 2};
        // 1 1 1 1 1 1 2 2 2 2 2 3 3 4 5 7 8 9 54 54 
        Arrays.sort(arr);
for(int i=0;i<arr.length;i++){
    System.out.print(arr[i]+" ");}
    System.out.println();
        System.out.println("Duplicate elements:");
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                // Print duplicate element only once
                if (i == 0 || arr[i] != arr[i - 1]) {
                    System.out.print(arr[i] + " ");
                }
            }
        }
    }
}
