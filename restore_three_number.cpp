#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> a(4);
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a.begin(),a.end());
cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2];

    return 0;
}