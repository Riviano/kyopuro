#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> G[30];
int dfs(int p){
    if(!G[p].size()) return 1;
    int mi=1000000,ma=0;
    for(int i=0;i<(int)G[p].size();i++){
        int t=dfs(G[p][i]);
        mi = min(mi,t);
        ma = max(ma,t);
    }
    return mi+ma+1;
}
int main(){
    int n;cin >> n;
    for(int i=1;i<n;i++){
        int b;cin >> b;
        G[b-1].push_back(i);
    }
    cout << dfs(0) << endl;
    return 0;
}