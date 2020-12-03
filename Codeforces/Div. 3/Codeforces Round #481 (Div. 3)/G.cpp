#include <bits/stdc++.h>
using namespace std;
#define MAXN 110

struct exam {
    int i, s, d, c;
};

int n, m, day;
bool possible;
vector<exam> e;
int calendar[MAXN];

bool compare (exam a, exam b) {
    if (a.s < b.s) {
        return true;
    }

    if (day > a.d && day <= b.d) {
        return true;
    }
    
    return (a.d - a.c) < (b.d - b.c);
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    e.resize(m);
    for (int i = 0; i < n; i++) {
        calendar[i] = -1;
    }
    
    for (int i = 0; i < m; i++) {
        cin >> e[i].s >> e[i].d >> e[i].c;
        e[i].i = i;
        calendar[e[i].d - 1] = m + 1;
    }

    day = 0;
    possible = true;
    sort(e.begin(), e.end(), compare);
    for (int j = 0; j < e.size(); j++) {
        e[j].s = max(e[j].s - 1, 0);
        e[j].d = max(e[j].d - 1, 0); 
    }
    for (int i = 0; i < n; i++) {
        // cout << "Day " << day << ":";
        // for (int j = 0; j < e.size(); j++) {
        //     cout << " (" << e[j].i + 1 << ", " << e[j].s << ", " << e[j].d << ", " << e[j].c << ")"; 
        // }
        // cout << endl;

        if (e[0].d == 0) {
            possible = false;
            break;
        } else if (e[0].s == 0 && calendar[i] != m + 1 && e.size() != 0) {
            e[0].c--;
            calendar[i] = e[0].i + 1;
            if (e[0].c == 0) {
                e.erase(e.begin());
            }
        } else if (calendar[i] != m + 1) {
            calendar[i] = 0;
        }
        
        for (int j = 0; j < e.size(); j++) {
            e[j].s = max(e[j].s - 1, 0);
            e[j].d = max(e[j].d - 1, 0); 
        }

        day++;
        sort(e.begin(), e.end(), compare);
    }

    if (possible && e.size() == 0) {
        for (int i = 0; i < n; i++) {
            cout << calendar[i] << " ";
        }
        cout << "\n";
    } else {
        cout << "-1\n";
    }

    return 0;
}