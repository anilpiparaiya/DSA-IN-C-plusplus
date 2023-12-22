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
    
    constexpr int N=1e6+10;
    vi d(N);
    rep(i, 1, N) for(int j=i; j<N; j+=i) d[j]++;
    int q;
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
        cout << d[a] << '\n';
    }
    return 0;
}
