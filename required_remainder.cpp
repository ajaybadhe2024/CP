#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int x,y,n;
   cin>>x>>y>>n; 
   int k=((n/x)*x)+y;
   if(k>n){
    int ans=k-x;
     cout<<ans<<endl;
   }else{
  cout<<k<<endl;
   }
   
 }
return 0;
}                                                   