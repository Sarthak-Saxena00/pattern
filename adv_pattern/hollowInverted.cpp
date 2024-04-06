#include<iostream>
using namespace std;
main(){
    for(int i=5;i>=1;i--){
        for(int j=9;j>=1;j--){
            if(j-i==4 || i==5 ||i+j==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}