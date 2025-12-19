#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int ans=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
      int manH;
      cin>>manH;
      if(manH>h){
         count1+=2;
      }else{
         count2++;
      }
    ans=count1+count2;

    }
    cout<<ans<<endl;
return 0;
}