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

ll gcd(ll a, ll b) {
    if(a > b) {
        swap(a, b);
    }
    while(1) {
        if(b % a == 0) {
            return a;
        }
        ll c = b % a;
        b = a;
        a = c;
    }
    return 0;
}

int main() {
    ll A, B;
    cin >> A >> B;
    ll D = gcd(A, B);
    ll ans = 1;

    for(ll i = 2; i * i <= D; i++) {
        if(D % i == 0) {
            ans++;
            while(D % i == 0) {
                D /= i;
            }
        }
    }
    if(D > 1)
        ans++;
    cout << ans << endl;
    return 0;
}