#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 1510;
const int MAXM = 11000;
const int INF = 1000000000;

struct tree {
    int next[26];
};


tree x[MAXN*MAXN];


int main() {
    //freopen("D.in", "r", stdin);
    //freopen("D.txt", "w", stdout);
    string p, q;
    int m;
    cin >> p >> q >> m;
    int n = 0, bad, j, root, ans = 0, len = p.size();
    for (int i = 0; i < len; ++i) {
        root = 0;
        bad = 0;
        j = i;
        while (j < len) {
            if (q[p[j]-'a'] == '0') ++bad;
            if (bad > m) break;
            if (x[root].next[p[j]-'a'] > 0) {
                root = x[root].next[p[j]-'a'];
            } else {
                ++n;
                x[root].next[p[j]-'a'] = n;
                root = n;
                ++ans;
            }
            ++j;
        }

    }

    cout << ans << endl;

    return 0;
}
