#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    deque<int> dq(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    sort(dq.begin(), dq.end());
    while (dq.size() > 1) {
        if (dq.size() % 2 != 0) { 
            dq.pop_back(); 
            c++;
        } else {  
            dq.pop_front(); 
            c--; 
    }

    }
    cout << dq.front() << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
