#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define PI (acos(-1))
const int INF = 1e9 + 10;
const ll LLINF = 1e18 + 10;
const ll mod = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    priority_queue<ll> pq;
    rep(i, N) {
        ll a;
        cin >> a;
        pq.push(a);
    }

    ll ans = 0;
    rep(i, M) {
        ll top = pq.top();
        pq.pop();
        pq.push(top / 2);
    }

    while(!pq.empty()) {
        ll top = pq.top();
        pq.pop();
        ans += top;
    }

    cout << ans << endl;
    return 0;
}