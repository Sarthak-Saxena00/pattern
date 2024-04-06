import java.util.Scanner;

public class numStar3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = scanner.nextInt();
        int a = 1;
        int b = (n / 2) + 1;
        for (int i = n; i >= 1; i--) {
            if (i % 2 == 0) {
                int reven = n * a++;
                for (int j = 1; j <= n; j++) {
                    if (j < n) {
                        System.out.print(reven-- + "*");
                    } else {
                        System.out.print(reven--);
                    }
                }
                System.out.println();
            } else {
                int rodd = n * b++;
                for (int j = 1; j <= n; j++) {
                    if (j < n) {
                        System.out.print(rodd-- + "*");
                    } else {
                        System.out.print(rodd--);
                    }
                }
                System.out.println();
            }
        }
    }
}