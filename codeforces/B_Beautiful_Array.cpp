#include<bits/stdc++.h>
using namespace std;

void solve(){
    unsigned long long n,k,b,s;
    cin>>n>>k>>b>>s;

 
    if(s<(k*b) || s > k * b + (k - 1) * n ){
        cout<<-1<<endl;
        return ;
    }
        vector<long long>arr(n,0);
        arr[0]=k*b;
        s-=k*b;
        for(int i=0;i<n;i++){
            int x = min(k-1,s);
            arr[i]+=x;
            s-=x;
        }
    
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}