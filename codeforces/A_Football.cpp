#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string>arr(n);
    map<string, int> mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    string win = "";
    int val = 0; 
    for(auto it: mp){
        if(it.second > val){
            val = it.second;
            win = it.first;
        }
    }
    cout << win << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
