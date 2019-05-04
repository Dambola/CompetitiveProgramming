#include <bits/stdc++.h>
#define MAXN 100001

using namespace std;

struct pt{
	int64_t x, y, ind;
};

int n;
pt p[MAXN];

int64_t cross(pt a, pt b){
	return a.x * b.y - a.y * b.x;  
}

int64_t dot(pt a, pt b){
	return a.x * b.x + a.y * b.y;
}

bool top(pt a){
	return (a.y < 0) || (a.y == 0 && a.x < 0);
}

/// Comparador para ordenação radial
bool polarLess(pt a, pt b){
	bool ta = top(a);
	bool tb = top(b);
	if(ta != tb){
		return ta;
	}
	return cross(a,b) > 0;
}

// Comparador de angulo de dois vetores
bool angleLess(pt a, pt b, pt c, pt d){
	pt p1 = {dot(a,b), abs(cross(a,b))};
	pt p2 = {dot(c,d), abs(cross(c,d))};
	return cross(p1, p2) > 0;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p[i].x >> p[i].y;
		p[i].ind = i;
	}
	
	sort(p,p+n,polarLess);
	
	pt cp1 = p[0];
	pt cp2 = p[n-1];
	
	for(int i = 0; i < n - 1; i++){
		if(angleLess(p[i], p[i+1], cp1, cp2)){
			cp1 = p[i];
			cp2 = p[i+1];
		}
	}
	
	cout << cp1.ind + 1 << " " << cp2.ind + 1 << "\n";
	
    return 0;
}
