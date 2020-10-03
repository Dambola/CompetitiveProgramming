#include <bits/stdc++.h>
#define llu long long int
#define MAXN 101

using namespace std;

struct Value {
    llu x;
    llu y;
};

llu count3(llu x) {
    llu cnt = 0;
    while (x % 3 == 0) {
        x /= 3;
        cnt++;
    }
    return cnt;
}

bool compareValue(Value a, Value b) {
    if (a.x < b.x) {
        return false;
    } else if (a.x == b.x) {
        return a.y < b.y;
    }
    return true;
}

int n;
Value a[MAXN];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].y;
        a[i].x = count3(a[i].y);
    }

    sort(a, a + n, compareValue);

    cout << a[0].y;
    for (int i = 1; i < n; i++) {
        cout << " " << a[i].y;
    }
    cout << "\n";

    return 0;
}