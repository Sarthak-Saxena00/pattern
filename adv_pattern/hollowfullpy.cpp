#include<iostream>
using namespace std;
main(){
    /* int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=9;j++){
            if(i+j==6 || j-i==4 || i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } */

int n;
cout<<"enter the size of triangle";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(2*n)-1;j++){
        if(i+j==n+1 || j-i==n-1 || i==n){
          cout<<i;
        }
        else{
                cout<<"_";
            }
        }
        cout<<endl;
    }
}
    








/* #include<iostream>
using namespace std;
main(){
    int n=5;
    
    for(int i=1;i<=n;i++){
        for(int sp=n-i;sp>=1;sp--){
            cout<<"/";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
            
        }
        for(int g=i;g>=2;g--){
            cout<<g-1;
        }
        
        cout<<endl;
    }
} */