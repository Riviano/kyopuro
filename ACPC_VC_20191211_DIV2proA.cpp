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
    vector<Int> a(s.size());
    for(Int i=0;i<s.size();i++) a[i] = s[i]-'a';
    Int k;cin >> k;
    for(Int i=0;i<s.size();i++){
        if(a[i]==0) continue;
        if(a[i]+k>25){
            k-=(26-a[i]);
            a[i] = 0;
        }
    }
    k%=26;
    a[s.size()-1]+=k;
    a[s.size()-1]%=26;
    for(Int i=0;i<s.size();i++) cout << (char)(a[i]+'a');
    cout << endl;
}