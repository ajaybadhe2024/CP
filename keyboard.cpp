
#include<iostream>
using namespace std;
int main(){
     char dir;
     cin>>dir;

     string s;
     cin>>s;
     
     string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
     for(char c: s){
        int pos=keyboard.find(c);
        if(dir=='R'){
            cout<<keyboard[pos-1];
        }else{
            cout<<keyboard[pos+1];
        }
     }

return 0;
}