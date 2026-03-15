#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     string s;
     cin>>n>>s;
     unordered_map<string,int>freq;
     for(int i=0;i<n-1;i++){
        string two=s.substr(i,2);
        freq[two]++;
     }

     int maxi=0;
     string ans;
     for(auto it:freq){
        if(it.second>maxi){
            maxi=it.second;
            ans=it.first;
        }
     }
   cout<<ans<<endl;
return 0;
}