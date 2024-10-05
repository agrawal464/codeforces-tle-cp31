#include<bits/stdc++.h>
using namespace std;



void solve(){
    int x, k;
    cin >> x >> k;

    if (x % k != 0) {
        cout << 1 << endl;
        cout << x << endl;
    } else {
        int j = 0;
        for (int i = x - 1; i >= 1; i--) {
            if (i % k != 0) {
                if (x - i != 0) {
                    j++;
                    cout << 2 << endl;
                    cout << i << " " << x - i << endl;
                    break; 
                }
            }
        }
    }
}



int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}