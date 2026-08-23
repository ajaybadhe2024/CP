#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    string s;
    cin>>s;
    int first=0;
    int last=0;

      first=s[0]+s[1]+s[2];
       last=s[3]+s[4]+s[5];

     if(first==last){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }

   }
return 0;
}