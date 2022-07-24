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
    ll N, K;
    cin >> N >> K;
    vl A(N);
    rep(i, N) cin >> A[i];

    vl P(N), Q(N);
    rep(i, N) {
        rep(j, N) {
            if(A[i] > A[j]) {
                Q[i]++;
                if(i < j)
                    P[i]++;
            }
        }
    }
    ll ans = 0;
    rep(i, N) {
        ans += (P[i] * K) % mod + Q[i] * ((K * (K - 1) / 2) % mod) % mod;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}