#include <bits/stdc++.h>
#define INT long long int
using namespace std;

string s;
int m, l, r, k,t;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> s;
	cin >> m;
    
	for(int i = 0; i < m; i++){
    
		cin >> l >> r >> k;
        
		t = r - l + 1;
		char aux[t+1];
        
		for(int j = l; j <= r; j++){
			int ri = j - l;
			int npos = (ri + k)% t;
			aux[npos] = s[j-1];
		}
	
		for(int j = l; j <= r; j++){
			int ri = j - l;
			s[j - 1] = aux[ri];
		}
	}
	cout << s << "\n";
    return 0;
}
