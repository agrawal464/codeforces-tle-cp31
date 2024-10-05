#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;

   if(x!=1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<< 1 <<" ";
        }
    cout<<endl;
   }
   else if(k==1 || (k==2 && n%2==1)){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
    cout << n / 2 << endl;
    vector<int> result;

    if (n % 2 == 1) {
        result.push_back(3);
    } 
    else {
        result.push_back(2);
    }

    for(int i=0;i<n/2-1;i++){
        result.push_back(2);
    }
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
            cout << endl;
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