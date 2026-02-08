#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
     int count=1;
    vector<int>v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    for(int i=1;i<n;i++){
    if(v[i]>=v[i-1]){
     count++;
     }
    else{
        count=1;
     }
     ans=max(ans,count);
    }
     cout<<ans<<endl;
return 0;
}