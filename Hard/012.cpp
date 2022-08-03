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
const ll mod = 998244353;

ll modPow(ll a, ll n) {
    ll res = 1;
    rep(i, n) { res = res * a % mod; }
    return res;
}

int main() {
    int N;
    cin >> N;
    vi D(N);
    vi cnt(N);
    rep(i, N) {
        cin >> D[i];
        cnt[D[i]]++;
    }
    if(cnt[0] != 1 || D[0] != 0) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1;
    int done = 1;
    for(int i = 1; i < N; i++) {
        if(cnt[i] == 0) {
            if(done == N) {
                break;
            } else {
                cout << 0 << endl;
                return 0;
            }
        }
        ans = ans * modPow(cnt[i - 1], cnt[i]) % mod;
        done += cnt[i];
    }

    cout << ans << endl;
    return 0;
}