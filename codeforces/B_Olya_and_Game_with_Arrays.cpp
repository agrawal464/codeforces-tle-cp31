#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int mini = INT_MAX;
    unsigned long long sum=0;
    int sec_mini = INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<int>arr(a);
        for(auto &j:arr){
            cin>>j;
        }
        sort(arr.begin(),arr.end());
        mini = min(mini,arr[0]);
        sum+=arr[1];
        sec_mini = min(sec_mini,arr[1]);
    }
    cout<< (mini + sum - sec_mini) <<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}