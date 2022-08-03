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
    string S, T;
    cin >> S >> T;
    int lenS = S.size();
    int lenT = T.size();

    bool haveAns = false;

    for(int i = lenS - lenT; i >= 0; i--) {
        bool isOK = true;
        rep(j, lenT) {
            if(S[i + j] != '?' && S[i + j] != T[j]) {
                isOK = false;
                break;
            }
        }
        if(isOK) {
            haveAns = true;
            rep(j, lenT) { S[i + j] = T[j]; }
            break;
        }
    }
    if(haveAns) {
        rep(i, lenS) {
            if(S[i] == '?')
                S[i] = 'a';
        }
        cout << S << endl;
    } else {
        cout << "UNRESTORABLE" << endl;
    }
    return 0;
}