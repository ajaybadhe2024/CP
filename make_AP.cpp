#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool ans=false;
        long long x=(2*b-c);
        if(x>0 && (x%a==0)){
            ans=true;
        }
        long long y=c+a;
        if((y%(2*b)==0)){
            ans=true;
        }
        long long z=(2*b-a);
        if(z>0 && z%c==0){
            ans=true;
        }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
     }
return 0;
}