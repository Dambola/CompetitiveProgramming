#include <bits/stdc++.h>
using namespace std;
#define MAXN 51
#define MAXA 1001

int a[MAXN];
int v[MAXA];
int n, k, cnt;

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < MAXA; i++) {
        v[i] = -1;
    } 
    
    cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if (v[a[i]] == -1) cnt++;
        v[a[i]] = i;
    }
    
    cout << cnt << "\n";
    for (int i = 0; i < n; i++) {
        if (v[a[i]] == i) {
            cout << a[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}