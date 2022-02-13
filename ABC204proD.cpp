#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    for(auto &i:t) cin >> i;
    do{
        for(auto &i:t) cout << i << " ";
        cout << endl;
    }while(next_permutation(t.begin(),t.end()));
}