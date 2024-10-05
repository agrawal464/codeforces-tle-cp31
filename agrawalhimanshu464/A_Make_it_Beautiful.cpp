#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==arr[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        swap(arr[0],arr[n-1]);
        cout<<arr[n-1] <<" ";
        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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