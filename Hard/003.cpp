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
    int H, W;
    cin >> H >> W;
    vs A(H);
    rep(i, H) cin >> A[i];
    // dp[i][j]: i, jまで進んだ時のコストの最小値
    vvi dp(H, vi(W, INF));
    if(A[0][0] == '#')
        dp[0][0] = 1;
    else
        dp[0][0] = 0;
    rep(i, H) rep(j, W) {
        if(i + 1 < H) {
            int subcost = 0;
            if(A[i][j] == '.' && A[i + 1][j] == '#')
                subcost = 1;
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + subcost);
        }

        if(j + 1 < W) {
            int subcost = 0;
            if(A[i][j] == '.' && A[i][j + 1] == '#')
                subcost = 1;
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + subcost);
        }
    }

    cout << dp[H - 1][W - 1] << endl;
    return 0;
}