#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    if(a%2==0) a++;
    long long m = (b-a+2)/4;
    cout<< m <<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}   