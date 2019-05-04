#include <bits/stdc++.h>
#define MAXN 31
#define MAXM 31
#define MAXK 51
#define INF 987654321

using namespace std;

int64_t t, n, m, k;
int64_t dp[MAXN][MAXM][MAXK];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	for(int i = 0; i < MAXN; i++){
		for(int j = 0; j < MAXM; j++){
			dp[i][j][0] = 0;
			if(i*j <= 50)
				dp[i][j][i*j] = 0;
		}
	}
	for(int i = 1; i < MAXN; i++){
		for(int j = 1; j < MAXM; j++){
			for(int k = 1; k <= min(i*j,50); k++){
				if(k == i*j) continue;
				
				dp[i][j][k]	= INF;
				
				/// Horizontal
				for(int h = 1; h < j; h++){
					for(int c = 0; c <= k; c++){
						if((c <= i*(j-h)) && (k - c <= i*(h)))
							dp[i][j][k] = min(dp[i][j][k], dp[i][j-h][c] + dp[i][h][k-c] + i*i);					
					}
				}
				/// Vertical
				for(int v = 1; v < i; v++){
					for(int c = 0; c <= k; c++){
						if((c <= j*(i-v)) && (k - c <= j*(v)))
							dp[i][j][k] = min(dp[i][j][k], dp[i-v][j][c] + dp[v][j][k-c] + j*j);					
					}
				}
			}
		}
	}

	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> m >> k;
		cout << dp[n][m][k] << "\n";
	}

    return 0;
}
