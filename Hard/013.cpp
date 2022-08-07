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
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    rep(i, 1000) {
        string now = "";
        now += '0' + i / 100;
        now += '0' + (i % 100) / 10;
        now += '0' + i % 10;

        int k = 0;
        bool ok = false;
        rep(j, N) {
            if(S[j] == now[k]) {
                if(k == 2) {
                    ok = true;
                    break;
                }
                k++;
            }
        }
        if(ok)
            ans++;
    }
    cout << ans << endl;
    return 0;
}