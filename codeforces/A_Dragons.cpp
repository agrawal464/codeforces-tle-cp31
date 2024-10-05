#include<bits/stdc++.h>
using namespace std;

int main() {
    int s,n;
    cin >> s>> n;
    vector<pair<int,int>> arr(n); 
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >>arr[i].second;
    }

    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            s +=arr[i].second;
        }
    }
    cout<<"YES"<<endl;


    return 0;
}