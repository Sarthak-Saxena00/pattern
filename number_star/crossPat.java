import java.util.Scanner;
public class crossPat {
    public static void main(String[] args) {
        int n;
        boolean chk=true;
        int a=1;
        System.out.print("enter the number of row");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                
                if(i+j==n+1){
                    System.out.print(i);
                }
                
                else if(j-i==0){
                    System.out.print(a++);
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println(" ");
        }
        s.close();
    }
}
