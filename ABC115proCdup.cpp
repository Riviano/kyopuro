#include<bits/stdc++.h>
using namespace std;
#define ft first
#define sd second
#define pb push_back
using ll = long long;
const int INF = 1e9+7;
const int EPS = -1e6;
inline void fastio() { ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);}
const int maxn = 100000+5;
int k,n;
int h[maxn];
int main(){
    fastio();
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> h[i];
    sort(h,h+n);
    int ans = INF;
    for(int i=0;i<n-k+1;i++)  ans = min(ans,h[i+k-1]-h[i]);
    
    cout << ans << endl;
}