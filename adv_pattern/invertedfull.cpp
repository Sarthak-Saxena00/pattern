#include<iostream>
using namespace std;
main(){
    int n=5;
    for(int i=n;i>=1;i--){
          for(int sp=n-i;sp>0;sp--){
            cout<<" ";
        }  
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}



/* 
        * * * * *
         * * * *
          * * *
           * *
            *





 */