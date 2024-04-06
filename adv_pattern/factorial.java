import java.util.Scanner;
public class factorial {
 public static void main(String[] args) {
    int n;
    int ans=1;
    System.out.println("enter the number");
    Scanner s=new Scanner(System.in);
    n= s.nextInt();
    if(n==1){
        System.out.println("1");
    }
    else{
        for(int i=n;i>=1;i--){
            ans=ans*i;
        }
    }
    System.out.println(ans);
 }
    
}