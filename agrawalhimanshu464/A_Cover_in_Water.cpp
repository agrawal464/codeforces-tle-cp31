#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int c=0;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
            c++;
            if(c==3){
                return 2;
            }
        }
        else if(s[i]=='#'){
            c=0;
        }
    }
    return cnt;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cout<<solve()<<endl;

    }
    return 0;
}