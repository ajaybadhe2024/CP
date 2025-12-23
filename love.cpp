#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     int count=0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count++;
        }
     }
     if(count>(s.size()/2)){
            cout<<s.size()<<endl;
     }else{
        cout<<2*count-1<<endl;;
     }
return 0;
}