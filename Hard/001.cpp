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
    string S;
    cin >> S;
    int N = S.size();
    vi ans(N);

    char prev = 'L';
    int countR = 0;
    int countL = 0;
    int lastDivideIndex = 0;
    rep(i, N) {
        char now = S[i];
        if(now == 'R') {
            if(now != prev) {
                ans[lastDivideIndex] += (countR + 1) / 2 + countL / 2;
                ans[lastDivideIndex + 1] += (countL + 1) / 2 + countR / 2;
                countL = 0;
                countR = 1;
            } else {
                countR++;
            }

        } else {
            countL++;
            if(now != prev) {
                lastDivideIndex = i - 1;
            }
        }
        prev = now;
    }
    ans[lastDivideIndex] += (countR + 1) / 2 + countL / 2;
    ans[lastDivideIndex + 1] += (countL + 1) / 2 + countR / 2;

    rep(i, N) { cout << ans[i] << " "; }
    cout << endl;
    return 0;
}