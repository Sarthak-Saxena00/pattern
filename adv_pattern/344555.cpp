#include<iostream>
using namespace std;
main(){
    int x=3;
     for(int i=1;i<=4;i++){
         for(int j=1;j<=i;j++){
             cout<<x;
         }
         x=x+1;
         cout<<endl;
     }

//cout<<endl;

int d=5;
     for(int i=3;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<d;
            
        }
        d=d-1;
        cout<<endl;
    } 
}