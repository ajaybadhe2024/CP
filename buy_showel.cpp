#include<iostream>
using namespace std;
int main(){
     int k,r;
     cin>>k>>r;
     for(int x=1;x<=10;x++){
        int total=x*k;
        if(total%10==0 || total%10==r){
            cout<<x<<endl;
            break;
        }
     }
return 0;
}   