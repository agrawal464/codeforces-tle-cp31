#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int xor_result = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xor_result ^= arr[i];
    }

    if(xor_result == 0){
        cout<< 0 <<endl;
    }
    else{
        if(n%2==1){
            cout<< xor_result << endl;
        }

        else{
            cout<< -1 << endl;
        }
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