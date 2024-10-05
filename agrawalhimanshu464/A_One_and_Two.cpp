#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
        }
    }
    int k=0;
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            m++;
        }
        if(2*m == cnt){
            k=i+1;
            break;
        }
    }
    if(cnt%2 !=0){
        cout<<-1<< endl;
    }
    else{
        cout<<k<< endl;
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