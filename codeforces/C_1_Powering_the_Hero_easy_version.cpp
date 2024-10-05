#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long ans=0;
    vector<int> v;
    for(auto e:a){
        if(e > 0){
            v.push_back(e);
            int j = v.size()-1 ;
            while(j > 0 && v[j] < v[j-1]){
                swap(v[j],v[j-1]);
                j--;
            }
        }
        else{
            if(!v.empty()){
                ans +=  v.back();
                v.pop_back();
            }
        }
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