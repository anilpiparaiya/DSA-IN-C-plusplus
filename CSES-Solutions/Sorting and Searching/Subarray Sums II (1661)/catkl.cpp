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
    
    ll n, x;
    cin >> n >> x;
    map<ll, ll> h;
    ll s=0, ans=0;
    while (n--) {
        h[s]++;
        ll a;
        cin >> a;
        s+=a;
        ans+=h[s-x];
    }
    cout << ans << '\n';
    return 0;
}
