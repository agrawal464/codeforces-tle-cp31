#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k;
    cin>>n>>k;

    if(k==1)  return n;
    int ans =0;
    while(n){
        ans += n%k;
        n/=k;
    }
   return ans;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cout<<solve()<<endl;
    }
    return 0;
}