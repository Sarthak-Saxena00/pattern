
/* 
enter the number of row5
1    
2 3  
4 5 6  
7 8 9 10        
11 12 13 14 15   

 */






import java.util.Scanner;

public class floydsTR {
     public static void main(String[] args) {
        int n;
        int a=1;
        System.out.print("enter the number of row");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(a++ +" ");
            }
            System.out.println(" ");
        }
        s.close();
    }
}
