#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
           maxi=max(maxi,arr[i]);
           sum+=maxi;
        }
      cout<<sum<<endl;
     }
return 0;
}




