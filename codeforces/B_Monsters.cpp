#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> arr(n);
    for(int i=1;i<=n;i++){
       int value;
       cin>>value;
        int mod_value;
        if (value % k == 0) {
            mod_value = k;
        } else {
            mod_value = value % k;
        }
        arr[i-1] = {mod_value,i};
    }   
    stable_sort(arr.begin(), arr.end(),  [](const pair<int, int>& a, const pair<int, int>& b){
        return a.first>b.first;
    });
    for(int i=0;i<n;i++){
        cout<< arr[i].second <<" ";
    }
    cout<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}