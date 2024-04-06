#include<iostream>
using namespace std;
main(){
     int n=4;
    for(int i=n;i>=1;i--){
        for(int sp=n-i;sp>0;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
    int n2=4;
    for(int r=2;r<=n2;r++){
        for(int s=n2-r;s>0;s--){
            cout<<" ";
        }
        for(int c=1;c<=r;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}