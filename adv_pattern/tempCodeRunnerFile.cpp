
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