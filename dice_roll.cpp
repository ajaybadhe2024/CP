#include<bits/stdc++.h>
using namespace std;
int main(){
   int yakko,wakko;
   cin>>yakko>>wakko;
   int m=max(yakko,wakko); //maximum nikalna hai      
   //Dot >=m
   int favourable=6-m+1;
   //find gcd
   int g=__gcd(favourable,6);
   cout<<favourable/g<<"/"<<6/g<<endl;


return 0;
}