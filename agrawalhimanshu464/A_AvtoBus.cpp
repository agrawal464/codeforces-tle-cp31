#include<bits/stdc++.h>
using namespace std;

void solve(){
    unsigned long long  n;
    cin >> n;
    if(n % 2 != 0 || n<4){
        cout<< -1 <<endl;
        return ;
    }
    unsigned long long max_buses = n / 4;

    unsigned long long min_buses;

    if(n % 6 == 0){
        min_buses = n / 6;
    }
    else{
        min_buses = n / 6 + 1;
    }

    cout << min_buses << " " << max_buses << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}