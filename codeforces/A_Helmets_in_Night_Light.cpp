#include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n,p;
            cin>>n>>p;
            vector<int>range(n);
            vector<int>cost(n);
            for(int i=0;i<n;i++){
                cin>>range[i];
            }
            for(int i=0;i<n;i++){
                cin>>cost[i];
            }
            multimap<int,int>mpp;
            for(int i=0;i<n;i++){
                if(cost[i]<=p)mpp.insert({cost[i],range[i]});
            }
            int count=1;
            long long price=p;
            for(auto it=mpp.begin();it!=mpp.end();it++){
                if(count==n)break;
                else if(count+it->second<=n){
                    price+=static_cast<long long> ((it->first))*(it->second);
                    count+=it->second;
                }
                else{
                    long long req=n-count;
                    price+=static_cast<long long>((it->first))*req;
                    count=n;
                }
            }
            if(count!=n){
                long long rew=n-count;
                price+=rew*p;
            }
            cout<<price<<endl;
        }
        return 0;
    }