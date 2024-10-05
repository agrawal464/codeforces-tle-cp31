#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> cnt(26, 0);
    string s = "";

    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++ ){
            if(cnt[j]==arr[i]){
                cnt[j]++;
                s+= char(97 + j);
                break;
            }
        }
    }
    cout<<s<<endl;
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}