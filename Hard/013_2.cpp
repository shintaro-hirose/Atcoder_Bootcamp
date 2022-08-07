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
    vvi A(10);
    rep(i, N) { A[S[i] - '0'].push_back(i); }
    int ans = 0;

    rep(i1, 10) rep(i2, 10) rep(i3, 10) {
        int cn = -1;
        auto itr = upper_bound(A[i1].begin(), A[i1].end(), cn);
        if(itr == A[i1].end())
            continue;
        cn = *itr;
        itr = upper_bound(A[i2].begin(), A[i2].end(), cn);
        if(itr == A[i2].end())
            continue;
        cn = *itr;
        itr = upper_bound(A[i3].begin(), A[i3].end(), cn);
        if(itr == A[i3].end())
            continue;
        ans++;
    }

    cout << ans << endl;
    return 0;
}