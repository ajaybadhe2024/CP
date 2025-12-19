#include<bits/stdc++.h>
using namespace std;
int main(){
    int ncol;
    cin>>ncol;
    vector<int>ans;
    for(int i=0;i<ncol;i++){
      int cube;
      cin>>cube;
      ans.push_back(cube);
       }
     sort(ans.begin(),ans.end());
     for(int final:ans){
      cout<<final<<" ";
     }
        cout<<endl;
return 0;
}