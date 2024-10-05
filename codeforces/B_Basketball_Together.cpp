    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        long long n,d;
        cin>>n>>d;

        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end(),greater<long long>());
        
        int cnt=0;
        int m=n;
        for(int i=0;i<n;i++){
            long long req = (d / arr[i])+1; 
            if(req>m){
                break;
            }
            m-=req;
            cnt++;
        }
        cout<<cnt<<endl;
        
        return 0;
    }