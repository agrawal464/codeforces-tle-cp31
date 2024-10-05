#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==k){
            c++;
        }
    }
        if(c>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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