#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   while(n--){
   string s;
   cin>>s;
   int ans=s.size()-2;
   if(s.size()<=10){
    cout<<s<<endl;
   }else if(s.size()>10){
    cout<<s.front()<<ans<<s.back()<<endl;
   }
   }
return 0;
}