                   /*  

                   *
                  * *
                 * * *
                * * * *
               * * * * *
                   */
#include<iostream>
#include <cmath>
using namespace std;
main(){
    int n=9;
    for(int i=1;i<=n;i++){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}