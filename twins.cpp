#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int totalsum=0;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    totalsum+=a[i];
  }
  sort(a.begin(),a.end(),greater<int>());
  int sum=0;
  int count=0;
  for(int i=0;i<n;i++){
    sum+=a[i];
    count++;
    if(sum>(totalsum-sum)){
      break;
      
    }
  }
  cout<<count<<endl;

return 0;
}