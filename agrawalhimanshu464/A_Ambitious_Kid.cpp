#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            arr[i]=abs(arr[i]);
        }
    }
    int m = *min_element(arr.begin(),arr.end());
    cout<<m<<endl;
}

int main() {
    
        solve();
    
    return 0;
}