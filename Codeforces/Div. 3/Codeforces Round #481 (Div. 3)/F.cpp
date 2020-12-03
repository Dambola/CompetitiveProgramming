#include <bits/stdc++.h>
#define lli long long int
#define MAXN 200010
#define INF 1000000001

using namespace std;

int n, k, x, y;
int r[MAXN];
int s_r[MAXN];
int p_m[MAXN];

int i_binary_search (int l, int r, int f) {
    if (l + 1 >= r) return (f <= s_r[l]) ? l : r;
    int m = (l + r) / 2;
    if (f <= s_r[m]) return i_binary_search(l, m, f);
    else return i_binary_search(m, r, f);
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    r[n] = INF;
    for (int i = 0; i < n; i++) {
        cin >> r[i];
        s_r[i] = r[i];
        p_m[i] = 0;
    }

    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        if (r[x-1] > r[y-1]) p_m[x-1]--; 
        if (r[y-1] > r[x-1]) p_m[y-1]--; 
    }

    sort(s_r, s_r + n);
    for (int i = 0; i < n; i++) {
        p_m[i] += i_binary_search(0, n, r[i]);
        cout << p_m[i]<< " ";
    }
    cout << "\n";

    return 0;
}