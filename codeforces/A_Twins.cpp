    #include<bits/stdc++.h>
    using namespace std;


    int main() {
        int n;
        cin >> n;
        vector<int>arr(n);
        int total_sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total_sum += arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            cnt++;
            if(sum > total_sum-sum){
                break;
            }
        }
        cout<< cnt << endl;
    return 0;
}