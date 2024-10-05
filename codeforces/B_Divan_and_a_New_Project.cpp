#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vpll vector<pair<long long, long long>>  // Vector of pairs (for value and index)
#define vll vector<long long>                    // Vector for result positions

void solve(int test) {
    ll n;
    cin >> n;  // Read the size of the array
    
    vpll a(n);  // Vector to store pairs of (-value, index)
    
    // Input the array values and store them as (-value, index)
    for (ll i = 0; i < n; i++) {
        ll aa;
        cin >> aa;  // Read the value
        a[i].first = -aa;  // Store the negative of the value (for descending sort)
        a[i].second = i;   // Store the index
    }
    
    // Sort the array of pairs by value in descending order (since values are negative)
    sort(a.begin(), a.end());
    
    ll dist = 1;   // To track the distance from the origin
    vll ans(n);    // To store the resulting positions
    ll sum = 0;    // To calculate the sum
    
    // Assign positions alternately to the left and right
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans[a[i].second] = dist;  // Assign a positive distance
            sum -= a[i].first * dist; // Update sum (a[i].first is negative)
        } else {
            ans[a[i].second] = -dist; // Assign a negative distance
            sum -= a[i].first * dist; // Update sum
            dist++;  // Increment distance for next pair
        }
    }
    
    // Output the result
    cout << (2 * sum) << "\n0 ";  // Output the sum (multiplied by 2) and start with 0
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";  // Output the positions
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;  // Number of test cases
    for (int test = 1; test <= T; test++) {
        solve(test);  // Solve each test case
    }
    return 0;
}
