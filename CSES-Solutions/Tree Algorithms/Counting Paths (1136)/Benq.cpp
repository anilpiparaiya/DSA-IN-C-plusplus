#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;

const int MAXN = 200001, MAXK = 18;

struct LCA {
    int V, R;
    vi edges[MAXN];
    int parK[MAXK][MAXN];
    int depth[MAXN], tmp[MAXN];
    
    void addEdge(int u, int v) {
        edges[u].pb(v), edges[v].pb(u);
    }
    
    void dfs(int u, int prev){
        parK[0][u] = prev;
        depth[u] = depth[prev]+1;
        for (int v: edges[u]) if (v != prev) dfs(v, u);
    }
    
    void dfs1(int u, int prev) {
        for (int i: edges[u]) if (i != prev) dfs1(i,u);
        tmp[prev] += tmp[u];
    }
    
    void construct() {
        dfs(R, 0);
        FOR(k,1,MAXK) FOR(i,1,V+1)
        parK[k][i] = parK[k-1][parK[k-1][i]];
    }
    
    int lca(int u, int v){
        if (depth[u] < depth[v]) swap(u,v);
        
        F0Rd(k,MAXK)  if (depth[u] >= depth[v]+(1<<k))  u = parK[k][u];
        F0Rd(k,MAXK) if (parK[k][u] != parK[k][v]) u = parK[k][u], v = parK[k][v];
        
        if(u != v) u = parK[0][u], v = parK[0][v];
        return u;
    }
    
    int dist(int u, int v) {
        return depth[u]+depth[v]-2*depth[lca(u,v)];
    }
};

LCA L;
int m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> L.V >> m; L.R = 1;
    F0R(i,L.V-1) {
        int a,b; cin >> a >> b;
        L.addEdge(a,b);
    }
    L.construct();
    F0R(i,m) {
        int a,b; cin >> a >> b;
        int x = L.lca(a,b);
        L.tmp[a] ++, L.tmp[b] ++, L.tmp[x] --, L.tmp[L.parK[0][x]] --;
    }
    L.dfs1(1,0);
    FOR(i,1,L.V+1) cout << L.tmp[i] << " ";
}

// read!read!read!read!read!read!read!read!read!read!read!read!read!read!read!read!
// ll vs. int!
