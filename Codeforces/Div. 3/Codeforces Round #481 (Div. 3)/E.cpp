#include <bits/stdc++.h>
#define lli long long int
#define MAXN 1010

using namespace std;

lli MIN(lli a, lli b) { return a < b ? a : b; }
lli MAX(lli a, lli b) { return a > b ? a : b; }

int n;
lli w, max_buss, min_buss, min_w, max_w;
lli a[MAXN];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    max_buss = max_w = w;
    min_buss = min_w = 0;

    for (int i = 0; i < n; i++) {
        max_buss += a[i];
        min_buss += a[i];
        max_w = MIN(max_w, 2 * w - MAX(w, max_buss));
        min_w = MAX(min_w, -MIN(0, min_buss));
    }   

    if (max_w < min_w) cout << "0\n";
    else cout << (max_w - min_w + 1) << "\n";
    
    return 0;
}