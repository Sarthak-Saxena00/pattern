import java.util.Scanner;
public class reverse {
    public static void main(String[] args) {
        int n;
        int rem;
        int rev=0;
        int count=0;
        System.out.println("enter the number");
Scanner s=new Scanner(System.in);
n= s.nextInt();
while(n!=0){
    rem=n%10;
    
    rev=rev*10+rem;
   // System.out.println(rev);
    n=n/10;
    count++;
}
System.out.println("the reverse is"+rev);
//System.out.println(count);
    }
}
