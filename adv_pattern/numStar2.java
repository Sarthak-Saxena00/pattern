
import java.util.Scanner;

public class numStar2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the row: ");
        int n = scanner.nextInt();
        int count = 1;

        for (int i = 1; i <= (n + 1) / 2; i++) {
            for (int j = 1; j < n; j++) {
                if (j < n - 1) {
                    System.out.print(count++ + "* ");
                } else {
                    System.out.print(count++);
                }
            }
            count = count + n - 1;
            System.out.println();
        }

        count = count - 3 * (n - 1);

        for (int i = (n + 3) / 2; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                if (j < n - 1) {
                    System.out.print(count++ + "* ");
                } else {
                    System.out.print(count++);
                }
            }
            count = count - 3 * (n - 1);
            System.out.println();
        }
    }
}