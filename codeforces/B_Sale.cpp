#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    vector<long long>arr(n);
    long long sum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n && m>0 ;i++){
        if(arr[i]<0){
            sum+=abs(arr[i]);
            m--;
        }
    }
    cout<<sum<<endl;    
    return 0;
}