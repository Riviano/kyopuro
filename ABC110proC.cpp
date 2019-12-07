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
    string s,t;cin >> s >> t;
    vector<int> start(26,-1);
    vector<int> end(26,-1);
    rep(i,s.size()){
        int a = s[i]-'a';
        int b = t[i]-'a';
        if(start[a]!=-1||end[b]!=-1){
            if(start[a]!=b||end[b]!=a){
                cout << "No" << endl;
                return 0;
            }
        }
        start[a] = b;
        end[b] = a;
    }
    cout << "Yes" << endl;
}
