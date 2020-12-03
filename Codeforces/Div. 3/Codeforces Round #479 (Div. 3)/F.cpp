#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010

int a[MAXN];
int dp[MAXN];
int max_dp[MAXN];
int n, r, max_r;
map<int, int> i_dp;

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    r = -2;
    max_r = -1;

    dp[n - 1] = -1;
    max_dp[n - 1] = 1;
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = -1;
        max_dp[i] = 1;

        i_dp[a[i]] = i;
        if (i_dp.count(a[i] + 1)) {
            int j = i_dp[a[i] + 1];

            if (a[i] + 1 == a[j] && max_dp[i] <= max_dp[j] + 1) {
                max_dp[i] = max_dp[j] + 1;
                dp[i] = j;
            }
        }

        if (max_dp[i] > max_r) {
            r = i;
            max_r = max_dp[i];
        }
    }

    cout << max_r << "\n";
    while (r != -1) {
        cout << (r + 1) << " ";
        r = dp[r];
    }
    cout << "\n";

    return 0;
}