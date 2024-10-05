#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        s=to_string(a);
        bool pos=true;
        for(int i=0;i<s.size();i++){
            if(i==0 && s[i]!='1'){
                pos=false;
               
                break;
            }
            else if(i==1 && s[i]!='0'){
                pos=false;
                
                break;
            }
            else if(i==2 && s[i]=='0'){
                pos=false;
                 
                break;
            }
        }
        if(s.size()<=2 || !pos)cout<<"NO"<<endl;
        else if(s.size()==3 && s[2]=='1')cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}