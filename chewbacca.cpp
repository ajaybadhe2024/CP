#include<iostream>
using namespace std;
int main(){
     string x;
      string ans="";
     cin>>x;
      
     for(int i=0;i<x.size();i++){
        char ch=x[i];
        int a=ch-'0';
        int inverted=9-a;
        ans+=(min(a,inverted)+'0');

     }
     if(ans[0]=='0'){
        ans[0]='9';
     }
     cout<<ans<<endl;
return 0;
}