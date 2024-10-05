#include <bits/stdc++.h>
using namespace std;

int main() {
    long T;
    cin >> T;
    while (T--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> v(n);
        long long maxi = 0;
        long long total_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            total_sum += v[i];
            maxi += (v[i] + x - 1) / x;  
        }

        long long mini = (total_sum + x - 1) / x;  

        cout << mini << " " << maxi << endl;
    }
    
    return 0;
}
