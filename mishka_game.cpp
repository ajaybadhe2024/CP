#include<bits/stdc++.h>
using namespace std;
int main(){
     long long n;
     cin>>n;
     int count1=0;
     int count2=0;
     for(int i=1;i<=n;i++){
        long long m,c;
        cin>>m>>c;
        if(m>c){
            count1++;
        }else if(m<c){
            count2++;
        }
        //(m==c)-> do nothing
     }
     if(count1==count2){
        cout<<"Friendship is magic!^^"<<endl;
     }else if(count1>count2){
        cout<<"Mishka"<<endl;
     }else{
        cout<<"Chris"<<endl;
     }
return 0;
}