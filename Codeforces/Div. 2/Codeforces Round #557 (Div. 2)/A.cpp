#include <bits/stdc++.h>
#define MAXN 51

using namespace std;

int n, h, m, l, r, x, som;
int house[MAXN];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> n >> h >> m;
	
	for(int i = 1; i <= n; i++){
		house[i] = h;
	}
	
	for(int i = 0; i < m; i++){
		cin >> l >> r >> x;
		for(int j = l; j <= r; j++){
			house[j] = min(x,house[j]);
		}
	}
	
	som = 0;
	for(int i = 1; i <= n; i++){
		som += house[i]*house[i];
	}
	
	cout << som << "\n";
	
    return 0;
}
