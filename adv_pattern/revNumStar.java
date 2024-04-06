
/* 
   
10*9*8*7
6*5*4
3*2
1
 */







public class revNumStar {
    public static void main(String[] args) {
    
        int n = 4; 
        int x = 10; 
        
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                if (j > i - 1) {
                    System.out.print(x);
                } else {
                    System.out.print(x + "*");
                }
                x--;
            }
            System.out.println();
        }
    }
}
