#include <bits/stdc++.h>
#define lli long long int
#define MAXN 100010
#define INF 10000000

using namespace std;

int n;
int min_c = INF;
lli b[MAXN];
lli aux_b[MAXN];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    if (n <= 2) { 
        cout << "0\n";
    } else {
        for (lli i = b[0] - 1; i <= b[0] + 1; i++) {    
            for (lli j = b[1] - 1; j <= b[1] + 1; j++) {
                bool possible = true;
                int c = abs(i - b[0]) + abs(j - b[1]);
                lli diff = i - j;
                
                aux_b[0] = i;
                aux_b[1] = j;

                for (int k = 2; k < n; k++) {
                    lli change = diff - (aux_b[k-1] - b[k]);
                    aux_b[k] = b[k] - change;
                    if (abs(change) == 1) {
                        c++;
                    } else if (abs(change) >= 1) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    min_c = min(c, min_c);
                }
            }
        }

        if (min_c == INF) cout << "-1\n";
        else cout << min_c << "\n";
    }

    return 0;
}