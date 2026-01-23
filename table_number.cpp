#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        int row=0;
        int col=0;
        int totalcount=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
             bool checkR=(a<=h);
             bool checkC=(a<=l);
             if(checkR){
                row++;
             }
             if(checkC){
                col++;
             }
              if(checkR||checkC){
                totalcount++;
              }
        }
        int ans=min({row,col,totalcount/2});
        cout<<ans<<endl; 
     }
return 0;
}