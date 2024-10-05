#include<bits/stdc++.h>
using namespace std;

bool cansort(vector<int>& arr){
    int n = arr.size();
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                sorted = false;
                break;
            }
        }
    }
    return is_sorted(arr.begin(),arr.end());
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(cansort(arr)){
            cout<<"YES"<<endl;
        }
        else{
                cout<<"NO"<<endl;
        }
        
    }
    return 0;
}