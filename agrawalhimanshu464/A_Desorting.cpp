#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    if(is_sorted(arr.begin(),arr.end())){
        int diff = INT_MAX;
        for(int i=1;i<n;i++){
            diff = min(diff,arr[i]-arr[i-1]);
        }
        cout<< (diff/2)+1 << endl;
    }
    else{
        cout<< 0 <<endl;
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