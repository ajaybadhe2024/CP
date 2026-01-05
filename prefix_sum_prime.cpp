#include<bits/stdc++.h>
using namespace std;
int main(){
     long long n;
     cin>>n;
     long long  ones=0,twos=0;
     for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        if(x==1){
            ones++;
        }else if(x==2){
            twos++;
        }
     }
     if(ones==0){ //no ones present
      for(int i=0;i<twos;i++){
        cout<<"2 ";
      }
     }else if(twos==0){  //no twos present
        for(int i=0;i<ones;i++){
        cout<<"1 ";
      }
     }else{
        cout<<"2 1 ";
      for(int i=0;i<twos-1;i++){
        cout<<"2 ";
      }
      for(int i=0;i<ones-1;i++){
        cout<<"1 ";
      }
     }
return 0;
}
