#include<bits/stdc++.h>
using namespace std;


int solve(const vector<int> &a, int st) {
    int max_score = INT_MIN;
    int cnt = 0;
    
    for (int j = st; j < a.size(); j += 2) {
        max_score = max(max_score, a[j]);
        cnt++;
    }
    
    return max_score + cnt ;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n);
    
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        
        int score_0 = solve(v, 0);
        int score_1 = solve(v, 1);
        
       
        cout << max(score_0, score_1) << endl;
    }
    return 0;
}
