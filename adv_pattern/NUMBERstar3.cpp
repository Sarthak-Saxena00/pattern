
/* 
4# 3# 2# 1
12# 11# 10# 9
8# 7# 6# 5
16# 15# 14# 13
 */


#include <iostream>
using namespace std;
int main() {
    int n;
    int a=1;
    cout<<"enter the value of n";
    cin>>n;
     int b=(n/2+1);
    //cout<<"b is "<<b<<endl;
    for(int i=n;i>=1;i--){
         if(i%2==0){
                int reven=n*(a++);
                for(int j=1;j<=n;j++){
                    if(j<n){
                        cout<<reven--<<"#";
                    }else{
                        cout<<reven--;
                    }
            
        }
               
            }else{
                int rodd=n*(b++);
                for(int j=1;j<=n;j++){
                    
            if(j<n){
                        cout<<rodd--<<"#";
                    }else{
                        cout<<rodd--;
                    }
        }
            }
        
        cout<<endl;
    }
    return 0;
}