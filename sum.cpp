#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    if((a+b)==c||(b+c)==a||(a+c)==b){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}