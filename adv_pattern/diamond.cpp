/* 
                            *
                           * *
                          * * *
                         * * * *
                          * * *
                           * *
                            *

 */
#include<iostream>
#include <cmath>
using namespace std;
main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int n2=4;
    for(int i2=n2;i2>=1;i2--){
          for(int sp2=n2-i2;sp2>0;sp2--){
            cout<<" ";
        }  
        for(int j2=1;j2<=i2;j2++){
            cout<<" *";
        }
        cout<<endl;
    }
}