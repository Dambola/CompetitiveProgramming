#include <bits/stdc++.h>
#define INT long long int
using namespace std;

int bitbit(INT n){
	int a = 0;
	while((1 << a) <= n){
		a++;
	}
	return a;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x;
	INT n, pa, pg;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		x = bitbit(n);
		pa = ((INT) 1 + n) * n / 2;
		pg = 2*((INT) pow(2,x) - (INT) 1);
		
		cout << (pa - pg) << "\n";
		
	}

    return 0;
}
