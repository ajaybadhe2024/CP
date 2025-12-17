#include<iostream>
using namespace std;
int main(){
     int k,w,n;
     cin>>k>>w>>n;
     int cost=((n*(n+1))/2);
     int totalcost=k*cost;
     if(totalcost>w){
        cout<<totalcost-w<<endl;
     }else{
        cout<<0<<endl;
     }

return 0;
}