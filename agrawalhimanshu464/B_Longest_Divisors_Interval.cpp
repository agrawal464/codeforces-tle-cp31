#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    int ans = 1;
    while(n%ans==0){
        ans++;
    }
    cout<<ans-1<<endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}