#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum = 0;
    int digit1 = n % 10;    
    int digit2 = n / 10;    
    sum = digit1 + digit2;  

    cout << sum << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}