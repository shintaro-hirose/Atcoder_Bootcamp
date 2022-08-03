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
    vs A(N), B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];
    rep(si, N - M + 1) rep(sj, N - M + 1) {
        bool ok = true;
        rep(i, M) rep(j, M) {
            if(B[i][j] != A[si + i][sj + j]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}