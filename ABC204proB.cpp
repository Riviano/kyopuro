#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int> a(n);
    int ans = 0;
    for(auto &i:a){
        cin >> i;
        if(i>=10){
            ans+= i-10;
        }
    }
    cout << ans << endl;
}