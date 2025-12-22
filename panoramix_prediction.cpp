#include<iostream>
using namespace std;
bool prime(int nextprime){
  if(nextprime<2){
    return false;
  }
  for(int i=2;i*i<=nextprime;i++){
    if(nextprime%i==0){
      return false;
    }
  }
  return true;
}
int main(){
   int n,m;
   cin>>n>>m;
   int nextprime=n+1;
   while(!(prime(nextprime))){
    nextprime++;
   }
   if(nextprime==m){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
return 0;
}