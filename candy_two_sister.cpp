#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
 for(int i=0;i<t;i++){
   long long n;
   cin>>n;
   if(n<=2){
      cout<<0<<endl;
   }else{
      cout<<(n-1)/2<<endl;
   }
   }
  
   
return 0;
}