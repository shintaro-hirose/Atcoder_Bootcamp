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

int getDigits(ll n) {
    int res = 1;
    ll k = 10;
    while(1) {
        if(n / k > 0) {
            res++;
            k *= 10;
        } else {
            break;
        }
    }
    return res;
}

int main() {
    ll N;
    cin >> N;

    int ans = INF;
    for(ll i = 1; i * i <= N; i++) {
        if(N % i == 0) {
            int a, b;
            a = getDigits(i);
            b = getDigits(N / i);
            ans = min(ans, max(a, b));
        }
    }
    cout << ans << endl;
    return 0;
}