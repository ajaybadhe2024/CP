#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];//I took array size 5 Because it is zero Biased indexing
    for(int i=1;i<=4;i++){
      cin>>a[i];
    }

    string s;
    cin>>s;
    int total=0;
    for(int i=0;i<s.size();i++){
      int x=s[i]-'0'; //All Character converted into integer
      total=total+a[x];

    }
    cout<<total<<endl;
return 0;
}