


/*
1# 2# 3# 4
9# 10# 11# 12
17# 18# 19# 20
13# 14# 15# 16
5# 6# 7# 8
 */

#include <iostream>
using namespace std;
int main() {
    int n;
    int count=1;
    cout<<"enter the row";
    cin>>n;
     for(int i=1;i<=(n+1)/2;i++){
            for(int j=1;j<n;j++){
            if(j<n-1){
               cout<<count++<<"# "; 
            }
            else{
                cout<<count++;
            }
            
        }
        count=count+n-1;
        cout<<endl;
       // cout<<"the current count is"<<count<<endl;
        
    } 


    count=count-3*(n-1);
    
   for(int i=(n+3)/2;i<=n;i++){
       for(int j=1;j<n;j++){
        if(j<n-1){
         cout<<count++<<"# ";
        }else{
            cout<<count++;
        }
           
           
       }
      // cout<<"after loop count=="<<count<<endl;
       count=count-3*(n-1);
       cout<<endl;
   }
        
   
    return 0;
}