/*

*
**
***
****
*****

 */


 #include<iostream>
using namespace std;
main(){
    int size=5;
     for(int r=1;r<=size;r++)
    {
        for(int c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<endl;
    }

    // with while loop 
    /*  int row=1;
    while (row<=size)
    {
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;

    }
     */
    
} 





/*

1
12
123
1234
12345

 */
/* #include<iostream>
using namespace std;
main(){
    int size=5;
     for(int r=1;r<=size;r++)
    {
        for(int c=1;c<=r;c++){
            cout<<c;
        }
        cout<<endl;
    }

    // with while loop 
    int row=1;
    while (row<=size)
    {
        int col=1;
        while (col<=row)
        {
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;

    }

} */




/* 

1
22
333
4444
55555
 */
/* #include<iostream>
using namespace std;
main(){
    int size=5;
     for(int r=1;r<=size;r++)
    {
        for(int c=1;c<=r;c++){
            cout<<r;
        }
        cout<<endl;
    }

    // with while loop 
    int row=1;
    while (row<=size)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;

    }

} */



                                         /*

                                          *
                                         * *
                                        * * *
                                       * * * * 
                                      * * * * * 
                                       
                                       
                                           */
/* #include<iostream>
using namespace std;
main(){
    int size=5;
    for(int r=1;r<=size;r++){
        for(int s=r;s<=size-1;s++){
            cout<<"_";  
        }
        for(int c=1;c<=r;c++){
                cout<<c;
            }
            cout<<endl;

    }
} */






/* 
     *
    **
   ***
  ****
 *****

 */

/*   #include<iostream>
using namespace std;
main(){
    int n=5;
    for(int r=1;r<=n;r++){
        for(int sp=n-r;sp>0;sp--){
            cout<<"_";
        }
        for(int c=1;c<=r;c++){
            cout<<c;
        }
        cout<<endl;
    }
} 
 */




/*  
*****
_****
__***
___**
____*

*/

/* 
#include<iostream>
using namespace std;
main(){
    int n=5;
    for(int r=n;r>0;r--){
        for(int sp=n-r;sp>0;sp--){
            cout<<"_";
        }
        for(int c=r;c>0;c--){
            cout<<"*";
        }
        cout<<endl;
    }
}  */




/* 

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

 */


/* #include<iostream>
using namespace std;
main(){
    int size=5;
    int x=1;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<x++;
        }
        cout<<endl;
    }
}
 */