#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;

int main(){
    string s;cin >> s;
    int k;cin >> k;
    set<string> ss;
    for(int i=0;i<s.size();i++){
        string left;
        string right;
        for(int cl=0;cl<=i;cl++){
            left+=s[cl];
        }
        for(int cr=i+1;cr<s.size();cr++){
            right+=s[cr];
        }
        
        ss.insert(left);
        ss.insert(right);
    }
    for(auto &i:ss) cout << i << endl;
}