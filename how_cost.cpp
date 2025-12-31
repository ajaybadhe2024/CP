#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            count=1;
            break;
        }
    }
    if(count){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
    
     
return 0;
}