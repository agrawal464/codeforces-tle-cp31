#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini = v[0];
    int maxi = v[0];
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(mini > v[i]){
            mini = v[i];
        }
        if(maxi < v[i]){
            maxi =v[i];
        }
        if(maxi-mini > 2*x){
                cnt++;
                mini = maxi = v[i];
        }
    }
    cout<<cnt<<endl;
    }

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}