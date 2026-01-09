#include<bits/stdc++.h>
 using namespace std;
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
     if(count(v.begin(),v.end(),1)==n){
        cout<<"Alice"<<endl;
      }else if(v[0]==0 && v.back()==0){
        cout<<"Bob"<<endl;
      }else{
        cout<<"Alice"<<endl;
      }
      
   }
    
 return 0;
 }