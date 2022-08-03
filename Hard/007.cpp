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
#define INF (1e9 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    map<ll, ll, greater<ll>> mp;
    rep(i, N) {
        ll a;
        cin >> a;
        mp[a]++;
    }
    rep(i, M) {
        ll b, c;
        cin >> b >> c;
        mp[c] += b;
    }
    ll ans = 0;
    int K = N;
    for(const auto &p : mp) {
        if(p.second < K) {
            K -= p.second;
            ans += p.first * p.second;
        } else {
            ans += p.first * K;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}