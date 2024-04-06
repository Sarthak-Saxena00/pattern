#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=n;i>=1;i--){
        for(int s=n-i; s>0;s--)
        {
            cout<<" ";
        }
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
