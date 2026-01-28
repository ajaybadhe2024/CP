#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int U=0;
    int L=0;
     for(char c:s){
      if(isupper(c)){
        U++;
      }else{
        L++;
      }
       }

       if(U>L){
        for(char &c:s){
          c=toupper(c);
        }
       }else{
         for(char &c:s){
          c=tolower(c);
        }
       }
       cout<<s<<endl;
return 0;
}