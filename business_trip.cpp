#include<bits/stdc++.h>
using namespace std;
int main(){
   int k;
   cin>>k;
   vector<int>a(12);
   for(int i=0;i<a.size();i++){
    cin>>a[i];
   }

   if(k==0){
    cout<<0<<endl;
    return 0;
   }

   sort(a.begin(),a.end(),greater<int>());
    int sum=0;
    int cnt=0;
   for(int i=0;i<a.size();i++){
    sum+=a[i];
    cnt++;
    if(sum>=k){
      cout<<cnt<<endl;
      return 0;
    }
   }
   cout<<-1<<endl;
return 0;
}