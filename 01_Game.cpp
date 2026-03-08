
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        int zero=0;
        int one=0;
        for(auto c:s){
            if(c=='0'){
                zero++;
            }else{
                one++;
            }
        }
        int ans=min(zero,one);
        if(ans%2==1){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
     }
return 0;
}