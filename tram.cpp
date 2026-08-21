#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int ans=0;
   int finans=0;
   for(int i=0;i<t;i++){
    int a;
    cin>>a;
    int b;
    cin>>b;
    ans+=b;
    ans-=a;
     finans=max(finans,ans);
   }
    
     cout<<finans<<endl;
return 0;
}