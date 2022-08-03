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
    ll N;
    cin >> N;
    if(N % 2 == 0) {
        ll M = N / 2;
        ll k = 1;
        ll ans = 0;
        while(k <= M / 5) {
            k *= 5;
            ans += M / k;
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}