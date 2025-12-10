#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>>n>>k;
     vector<long long >a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
      int cuttoff=a[k-1];//due to zero biased indexing
      int count=0;
     for(int i=0;i<n;i++){
        if(a[i]>=cuttoff && a[i]>0){
        count++;
        
       }
     }
     cout<<count<<endl;
return 0;
}



