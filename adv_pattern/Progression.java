

/* 
 Enter the starting number:
5
Enter the common difference:
5
Enter the number of terms:
5
The AP is:
5 10 15 20 25
The GP is:
5.0 25.0 125.0 625.0 3125.0 
The HP is:
1/5 1/10 1/15 1/20 1/25
 */




import java.util.Scanner;

public class Progression{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Hello World");

        System.out.println("Enter the starting number:");
        int a = scanner.nextInt();
        System.out.println("Enter the common difference:");
        int d = scanner.nextInt();

        System.out.println("Enter the number of terms:");
        int n = scanner.nextInt();
        System.out.println("The AP is:");
        int A = a;
        for (int i = 1; i <= n; i++) {
            System.out.print(A + " ");
            A += d;
        }
        System.out.println();

        System.out.println("The GP is:");
        double G = a;
        for (int i = 1; i <= n; i++) {
            System.out.print(G + " ");
            G *= d;
        }
        System.out.println();

        System.out.println("The HP is:");
        for (int i = 0; i < n; i++) {
            System.out.print("1/" + (a + i * d) + " ");
        }
        System.out.println();
        scanner.close();
    }
}