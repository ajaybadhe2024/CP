#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int zero=0;
   int one=0;
   for(int i=0;i<s.size();i++){
   if(s[i]=='0'){
    zero++;
   }else{
    one++;
   }
   }
   if(zero==one){
    cout<<0<<endl;
   }else{
    cout<<abs(zero-one)<<endl;
   }
   
return 0;
}
