
import java.util.Scanner;
public class hcf {
    public static void main(String[] args) {
        int a,b,ans=1;
        System.out.println("enter the value of a and b");
        Scanner s=new Scanner(System.in);
            a= s.nextInt();
            b= s.nextInt();
            for(int i=1;i<=a||i<=b;i++){
                if(a%i==0 && b%i==0){
                    ans=i;   
                }
                
            }
            System.out.println("the hcf is "+ans);
    }
}
