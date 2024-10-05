#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
     vector<vector<int>> a(n, vector<int>(m));
    int mini = INT_MAX;
    int sum = 0;
    int negative_count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if (a[i][j] < 0) {
                negative_count++;  
            }
            mini = min(mini,abs(a[i][j]));
            sum += abs(a[i][j])         ;
        }
    }
    if(negative_count%2 !=0){
        cout<< sum-2*mini <<endl;
    }
    else{
        cout<< sum  <<endl;
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