#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.erase(i,3);
            i--;
            cout<<" ";
        }
        else{
            cout<<s[i];
        }
    }
}

int main() {
   
        solve();
    
    return 0;
}