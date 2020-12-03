#include <bits/stdc++.h>
using namespace std;
 
int n, cnt_x, cnt_r;
string s;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin >> s;

    cnt_x = cnt_r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') cnt_x++;
        else cnt_x = 0;
        if (cnt_x >= 3) cnt_r++;
    }

    cout << cnt_r << "\n";
    return 0;
}