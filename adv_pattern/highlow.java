import java.util.Scanner;
public class highlow {
    public static void main(String[] args) {
        int userNum,challengerNum;
        System.out.println("enter the challenger number");
        Scanner S=new Scanner(System.in);
        challengerNum= S.nextInt();
        System.out.println("guess the number");
        userNum= S.nextInt();

         while(userNum!=challengerNum){
            
            if(userNum>challengerNum){
                System.out.println("number is too high");
            } else if(userNum<challengerNum){
                System.out.println("too low");
            }
            System.out.println("try again,");
            userNum= S.nextInt();

         }
         System.out.println("you got the number");
    }
}
