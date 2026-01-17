#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), pos(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i; 
        }
        sort(a.begin(),a.end());
        bool ok = true;
        for (int x = 1; x < n; x++) {
            if ((pos[x] % 2) == (pos[x + 1] % 2)) {
                ok = false;
                break;
            }
        }
          if(ok){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }

        
    }

    return 0;
}

