
/* 
enter the number of rows 
5
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
 */




import java.util.Scanner;
public class numberPATTERN {
    public static void main(String[] args) {
        int n,x=1;
        System.out.println("enter the number of rows ");
        Scanner S=new Scanner(System.in);
        n= S.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                 if(j<n){
                    System.out.print(x+"*");
                
                 }
                 else{
                    System.out.print(x);
                 }
                
                x++;
            }
            System.out.println();
        }
    }
}
