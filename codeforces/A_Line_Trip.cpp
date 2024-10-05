#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 2);  
    arr[0] = 0;              
            
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];       
        }

    int maxi = INT_MIN;
    for (int i = 1; i <= n ; i++) {
        maxi = max(arr[i] - arr[i - 1], maxi);  
    }
    int m = k - arr[n] ;
    if(maxi < 2*m){
        cout << 2 * m << endl; 
    }
    else{
        cout<< maxi <<endl;
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
