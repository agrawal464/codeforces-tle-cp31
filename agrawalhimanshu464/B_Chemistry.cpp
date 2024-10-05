    #include<bits/stdc++.h>
    using namespace std;

    void solve(){
        int n,k;
        cin >> n >>k ;
        string s;
        cin>>s;
        unordered_map<int ,int> mpp;
        for(int i=0;i<n;i++){

            mpp[s[i]-'a']++;
        }
        int ans=0;
        for(auto it: mpp){
            if(it.second%2!=0){
                ans++;
            }
        }
        if(ans>k+1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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