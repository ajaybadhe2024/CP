#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
  if(n==0) return 1;
 return 1LL*n*fact(n-1);
}
long long ncr(int n,int r){
  if(r==0||r==n) return 1;
  return fact(n)/(fact(r)*fact(n-r));

}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
  cout<<ncr(10-n,2)*ncr(4,2)<<endl;
  }
return 0;
}