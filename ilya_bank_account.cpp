#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }else{
        int a=n;
        int b=n/10;
        int c=((n/100)*10+(n%10));
        cout<<max({a,b,c})<<endl;
    }
return 0;
}