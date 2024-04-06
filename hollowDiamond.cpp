#include<iostream>
using namespace std;
main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=7;j++){
            if(i+j==5 || j-i==3 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int r=4;r>0;r--){
        for(int c=7;c>0;c--){
            if(c-r==3 || r+c==5)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}