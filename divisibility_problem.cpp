#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
   for(int i=0;i<t;i++){
    long long a,b;
    cin>>a>>b;
   cout<<(b-(a%b))%b<<endl;
   }
return 0;
}