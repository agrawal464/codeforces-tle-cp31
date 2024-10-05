#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    vector<int> a(n,1);
    int cnt = 1;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(++mp[x] == 2 && cnt<3){
            a[i] = ++cnt;
        }
    }
    if(cnt == 3){
        for(int i : a){
            cout<< i <<" ";
        } 
           }
    else
    {
        cout<< -1 <<endl;
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