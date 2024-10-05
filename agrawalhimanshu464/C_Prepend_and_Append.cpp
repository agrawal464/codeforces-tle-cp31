#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left =0; 
        int right = n-1;
        int ans =n;
        while(left<right && s[left] != s[right]){
            ans-=2;
            left++;
            right--;
        }
        cout<< ans << endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}