#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
using namespace std;
#define int long long
#define dl double
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define sz(x) (int)(x).size()
#define lb lower_bound
#define ub upper_bound
#define gi greater<int>
#define py cout << "YES" << '\n'
#define pn cout << "NO" << '\n'
 
#define forn(i, e) for (int i = 0; i < e; i++)
#define forsn(i, s, e) for (int i = s; i < e; i++)
#define rforn(i, s) for (int i = s; i >= 0; i--)
#define rforsn(i, s, e) for (int i = s; i >= e; i--)
const char nl = '\n';
 
typedef vector<int> v64;
typedef vector<int> v32;
typedef pair<int, int> pll;
 
void solution();
#define setDecimal(num, y) cout << fixed << setprecision(y) << num
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
void prefixsum(v64 &v) { forsn(i, 1, sz(v)) v[i] += v[i - 1]; }
void postfixsum(v64 &v) { rforsn(i, sz(v) - 2, 0) v[i] += v[i + 1]; }
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    forsn(i, 1, t + 1) {
        solution();
        cout << '\n';
    }
    return 0;
}
 
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int YY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dtod(int x, int y, int colu) { return (x * colu) + y; }
 
void solution() {
    // int mn = 2e18;
    // int mx = -1*2e18;
    // map<int,int> mp;
    // int a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    // int len = 0; cin >> len; string s; cin >> s;
    // v64 v(a);
    // forn(i, a) cin >> v[i];

 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool continous_empty_cell=false;
    int total_count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'&&i+1<n&&s[i+1]=='.'&&i+2<n&&s[i+2]=='.'){
             continous_empty_cell=true;
            
        }
        if(s[i]=='.'){
            total_count++;
        }
    }
    if( continous_empty_cell){
        cout<<2<<endl;
    }else{
        cout<<total_count<<endl;
    }
 }

}