#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     set<char>st;
     for(int i:s){
        st.insert(tolower(i));
     }
     if(st.size()==26){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
return 0;
}