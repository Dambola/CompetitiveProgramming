#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int alfabeto[26][26], n, maior, x, y;
    string s;
    for(int i = 0; i < 26; i++)
        for(int j = 0; j < 26; j++)
            alfabeto[i][j] = 0;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n-1; i++){
        alfabeto[s[i]-'A'][s[i+1]-'A']++;
    }
    y = x = 0;
    maior = alfabeto[0][0];
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            if(maior < alfabeto[i][j]){
                maior = alfabeto[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << ((char) (x + 'A'))<< ((char) (y + 'A')) << "\n";
    return 0;
}