#include<bits/stdc++.h>
using namespace std;
int main(){
     long long t;
     cin>>t;
     while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long>a(n+1),pref(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i]=pref[i-1]+a[i];
        }
        long long total=pref[n];
       while(q--){
         long long l,r,k;
        cin>>l>>r>>k;
        long long removed=pref[r]-pref[l-1];
        long long add=(r-l+1)*k;
     long long newsum=total-removed+add;
        if(newsum%2==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
       }

     }
return 0;
}