#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s;

  string vowels="aoyeuiAOYEUI";
  for(char ajay:s){
    if(vowels.find(ajay)==string::npos){
        cout<<"."<<(char)tolower(ajay);
    }
  }

    return 0;
}
