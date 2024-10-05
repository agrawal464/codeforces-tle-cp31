#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    if(b-a>=99){
        string s=to_string(a);
        int n=s.size();
        if(a<=90)s="90";
        else if(a>=90 && a<100)s="190";
        else {
            s[n-1]='0';
            s[n-2]='9';
        }
        cout<<s<<endl;
    }
    else{
        int ans;
        int maxdiff=INT_MIN;
        for(int i=a;i<=b;i++){
            int x=i;
            int small=INT_MAX;
            int big=INT_MIN;
            int ndiff=INT_MIN;
            while(i!=0){
                int digit=i%10;
                i=i/10;
                big=max(big,digit);
                small=min(small,digit);
                ndiff=max(ndiff,big-small);
            }
            i=x;
            maxdiff=max(maxdiff,ndiff);
            if(maxdiff==ndiff)ans=x;
        }
        cout<<ans<<endl;
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
