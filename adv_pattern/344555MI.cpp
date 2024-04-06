#include<iostream>
using namespace std;
main(){
     int n=4;
    int x=3;
    for(int i=1;i<=n;i++){
        for(int sp=n-i;sp>0;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<x;
        }
        x=x+1;
        cout<<endl;
        
    }  
    int y=5;
    int N=3;
    for(int i=N;i>=1;i--){
        for(int sp=N-i;sp>=1;sp--){
            cout<<" ";
        }
        cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<y;
        }
        y=y-1;
        
        cout<<endl;
    }
}