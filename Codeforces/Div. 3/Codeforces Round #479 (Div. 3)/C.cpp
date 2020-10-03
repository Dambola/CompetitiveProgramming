#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k,x;
 
    cin >> n >> k;
    map<int,int> s;
 
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(s.count(x) == 0){
            s[x] = 1;
        }else{
            s[x]++;
        }
    }
 
    int cnt = 0, ls = -1;
    for(map<int,int>::iterator i = s.begin(); i != s.end(); i++){
        if(cnt == k){
            break;
        }else if(cnt > k){
            ls = -1;
            break;
        }
        cnt += i->second;
        ls = i->first;
    }
    if(k == 0){
        ls = s.begin()->first - 1;
    }
    if(cnt < k){
        ls = -1;
    }
    if(cnt > k) ls = -1;
    if(1 <= ls && ls <= 1000000000 ){
        cout<<ls<<"\n";
    }else{
        cout<<"-1\n";
    }
 
    return 0;
}