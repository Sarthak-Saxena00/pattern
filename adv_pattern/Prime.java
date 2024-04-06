import java.util.Scanner;
public class Prime {
    public static void main(String[] args) {
        int n;
        int count=0;
        System.out.println("enter the number");
        Scanner s=new Scanner(System.in);
         n=s.nextInt();
         for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
            }  
         }
         if (count>0){
            System.out.println("not a prime number");
         }
         else{
            System.out.println("prime number");
         }
    }
}
