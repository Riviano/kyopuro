#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const long long INF = 1LL<<60;
/* t    s  <実際> 
[] [ab] <ab>　<=先頭c 
[c] [ab] <cab> <=末尾a
[c] [aba] <caba> <= reverse
[aba] [c] <abac> <=末尾d
[aba] [cd] <abacd> <= reverse
[cd] [aba] <dcaba> 
*/
int main(){
    string s;cin >> s;
    int q;cin >> q;
    string t;
    rep(qi,q){
        int ty;cin >> ty;
        if(ty == 1){
            swap(s,t);
        }else{
            int f;char c;
            cin >> f >> c;
            if(f == 1){
                t += c;
            }else{
                s += c;
            }
        }
    }
    reverse(t.begin(),t.end());
    t += s;
    cout << t << endl;
    return 0;
}