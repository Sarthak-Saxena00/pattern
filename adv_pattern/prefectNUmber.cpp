#include <iostream>
using namespace std;
int main() {
    int n,ans=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
           cout<<"the divisor numbers are"<<i<<endl;
           ans=ans+i;
          
        }
    
    }
 cout<<"the sum of all the divisor is: "<<ans<<endl;
 if(ans==n){
  cout<<"this is the perfect number";   
 }
 else{
     cout<<"this is not a perfect number";
 }
    return 0;
} 


// find the perfect number between 0 to given range

main(){
    int h;
    int ans=0;
    cout<<"enter the higher limit";
    cin>>h;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h;j++){
            if(j<i){
                if(i%j==0){
                    ans=ans+j;
                }
            }
        }
        if(ans==i){
            cout<<i<<endl;
        }
        ans=0;
    }
}