#include <bits/stdc++.h>
using namespace std;
#define llu long long unsigned
#define MAXN 200010
#define MAXM 200010

int n, m;
llu a[MAXN];
llu paa[MAXN];
llu room;

int i_binary_search(int l, int r, llu find) {
    if (l + 1 >= r) return (find <= paa[l]) ? l : r;
    int m = (l + r) / 2;
    if (find <= paa[m]) return i_binary_search(l, m, find);
    else return i_binary_search(m, r, find);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    cin >> a[0];
    paa[0] = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        paa[i] = paa[i-1] + a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> room;
        int dormitory = i_binary_search(0, n-1, room) + 1;
        if (dormitory > 1) room -= paa[dormitory - 2];
        cout << dormitory << " " << room << "\n";
    }

    return 0;
}