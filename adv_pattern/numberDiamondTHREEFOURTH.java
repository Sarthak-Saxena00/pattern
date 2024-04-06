

/* 
enter the length of row n
8
       1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321
1234567
 123456
  12345
   1234
    123
     12
      1 */





import java.util.Scanner;
public class numberDiamondTHREEFOURTH {
    public static void main(String[] args) {
        int n;
        
        System.out.println("enter the length of row n");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(int i=1;i<=n;i++){
            for(int sp=n-i;sp>=1;sp--){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(j);
            }
            for(int g=i;g>=2;g--){
                System.out.print(g-1);
            }
            System.out.println();
        }
        int N=n;
        for(int i=N;i>=1;i--){
            for(int sp=N-i;sp>0;sp--){
                System.out.print(" ");
            }
            for(int j=1;j<i;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
