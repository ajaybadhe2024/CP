#include<bits/stdc++.h>
using namespace std;
int main(){
      string a,b;
      cin>>a>>b;
      //covert uppercase letter into lowercase
      for(auto &c:a){
          c=towlower(c);
      }
      for(auto &d:b){
          d=towlower(d);
      }
      if(a<b){
          cout<<-1<<endl;
      }else if(a>b){
          cout<<1<<endl;
      }else{
          cout<<0<<endl;
      }
return 0;
}