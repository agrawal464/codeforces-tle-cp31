#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    // Calculate the XOR of all numbers from 0 to (a-1)
    int pXor;
    if (a % 4 == 1) pXor = a - 1;
    else if (a % 4 == 2) pXor = 1;
    else if (a % 4 == 3) pXor = a;
    else pXor = 0;
    

    if (pXor == b) {
        cout << a << endl;
    } else if ((pXor ^ b) != a) {
        cout << a + 1 << endl;
    } else {
        cout << a + 2 << endl;
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
