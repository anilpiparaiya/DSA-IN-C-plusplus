#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin.exceptions(cin.failbit);
    
    constexpr ll P=1e9+7;
    ll n, ans=0;
    cin >> n;
    rep(i, 2, n+1)
    ans=(ans*i+(i%2? P-1:1))%P;
    cout << ans << '\n';
    return 0;
}
