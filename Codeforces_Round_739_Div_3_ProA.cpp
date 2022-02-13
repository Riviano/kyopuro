#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> res;
    for(int i=0; i<1000000;i++){
        if(i%3==0) continue;
        string t = to_string(i);
        if(t[t.length()-1] == '3') continue;
        res.push_back(i);
    }

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        cout << res[a-1] << endl;
    }
    
}