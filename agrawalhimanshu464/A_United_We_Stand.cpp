#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr.back()==arr[0]){
        cout<< -1 <<endl;
        return ;
    }
    else{
        int it=0;
        while(arr[it]==arr[0]) it++;
        cout<< it << " " << n-it <<endl;
        for(int i=0;i<it;i++) cout<< arr[i] << " ";
        cout << endl;
        for(int i=it;i<n;i++) cout<< arr[i] << " " ;
        cout << endl;
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