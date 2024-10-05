#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n+1);
        arr[0]=0;
        int maxi = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i]; 
        }

        arr.push_back(m);
        sort(arr.begin(),arr.end());

        for(int i=1;i<n+1;i++){
            maxi = max(maxi,arr[i] - arr[i-1]);
        }
        
        maxi = max(maxi,2*(m - arr[n]));

        cout<<maxi<<endl;
    }
    return 0;
}