import java.util.Scanner;
import java.lang.Math;

public class Armstrong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the starting number: ");
        int start = scanner.nextInt();

        System.out.print("Enter the ending number: ");
        int end = scanner.nextInt();

        

        for (int i = start; i <= end; i++) {
            int n = i;
            int rem, sum = 0;
            while (n != 0) {
                rem = n % 10;
                sum += Math.pow(rem, 3);
                n /= 10;
            }
            if (sum == i) {
                System.out.print(i + " ");
            }
        }

        System.out.println();
    }
}
