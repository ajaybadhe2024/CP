#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;//store the value of 0 and 1
    int row,col;
    //create 2D array take input
    for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
         cin>>x;
         if(x==1){
            row=i;//current row
            col=j;//current column          
         }

      }
    }
    int move=abs(row-3)+abs(col-3);
    cout<<move<<endl;
return 0;
}
