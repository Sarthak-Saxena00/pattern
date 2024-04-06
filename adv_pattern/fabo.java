import java.util.Scanner;
public class fabo {
    public static void main(String[] args) {
        int n;
        System.out.println("enter the number of terms you want to print");
        Scanner S=new Scanner(System.in);
        n= S.nextInt();
        int start=0;
    int a=1;
    int nxt;
    for(int i=0;i<n;i++){
        nxt=start+a;
        start=a;
        a=nxt;
        System.out.print(" "+start);
    }
    }
}
