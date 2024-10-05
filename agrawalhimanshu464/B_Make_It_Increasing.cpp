#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=n-2;i>=0;i--){
        while(arr[i]>=arr[i+1] && arr[i]>0){
            arr[i] = arr[i]/2;
            ans++;
        }
        if(arr[i] == arr[i+1]){
            cout<< -1 << endl;
            return;
        }
    }
    cout<<ans<<endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}