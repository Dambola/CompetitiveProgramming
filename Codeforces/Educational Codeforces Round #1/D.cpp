#include <bits/stdc++.h>
#define INT long long int
#define MAXN 1000
using namespace std;

int n, m, k;
string mapa[MAXN];
int cor[MAXN][MAXN];
vector<int> d;

void bfs(int i, int j, int c){
	int quadros = 0;
	queue< pair<int,int> > Q;
	Q.push(make_pair(i,j));
	cor[i][j] = c;
	
	while(!Q.empty()){
		int x = Q.front().first;
		int y = Q.front().second;
		
		Q.pop();
		
		if(mapa[x+1][y] == '*'){
			quadros++;
		}else if(cor[x+1][y] != c){
			Q.push(make_pair(x+1,y));
			cor[x+1][y] = c;
		}
		
		if(mapa[x-1][y] == '*'){
			quadros++;
		}else if(cor[x-1][y] != c){
			Q.push(make_pair(x-1,y));
			cor[x-1][y] = c;
		}
		
		if(mapa[x][y+1] == '*'){
			quadros++;
		}else if(cor[x][y+1] != c){
			Q.push(make_pair(x,y+1));
			cor[x][y+1] = c;
		}
		
		if(mapa[x][y-1] == '*'){
			quadros++;
		}else if(cor[x][y-1] != c){
			Q.push(make_pair(x,y-1));
			cor[x][y-1] = c;
		}
	}
	
	d.push_back(quadros);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	d.push_back(-1);
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		cin >> mapa[i];
		for(int j = 0; j < m; j++){
			cor[i][j] = 0;
		}
	}
	
	int c = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(cor[i][j] == 0 && mapa[i][j] == '.'){
				bfs(i,j,c);
				c++;
			}
		}
	}
	
	int x, y;
	for(int i = 0; i < k; i++){
		cin >> x >> y;
		x--;
		y--;
		cout << d[cor[x][y]] <<"\n";
	}
	
    return 0;
}
