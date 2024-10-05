#include <bits/stdc++.h>
using namespace std;

string transformAndValidate(string s, string t) {
    int n = s.length();
    int m = t.length();
    
    // Two pointers for traversing s and t
    int s_index = 0;
    int t_index = 0;

    // Replace '?' in s with characters from t
    while (s_index < n && t_index < m) {
        if (s[s_index] == '?' || s[s_index] == t[t_index]) {
            if (s[s_index] == '?') {
                s[s_index] = t[t_index]; // Replace '?' with character from t
            }
            s_index++; // Move to the next character in s
        }
        t_index++; // Move to the next character in t
    }

    // Check if we have processed all characters in s
    if (s_index == n) {
        return s; // Valid transformed s
    }
    
    return "NO"; // Not possible to form s as a subsequence of t
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        string result = transformAndValidate(s, t);
        cout << (result == "NO" ? "NO" : "YES\n" + result) << endl;
    }
}

int main() {
    solve();
    return 0;
}
