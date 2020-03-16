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
int ans = 0;
vector<string> an;

int main(){
    string s;cin >> s;
    string prev="";
    int i=0;
    int ans = 0;    
    string c = "";
    while(i<s.size()){
        c+=s[i];
        if(prev==c){
            i+=1;
            if(i==s.size()){
                break;
            }
        }else{
            //debug(c);
            prev = c;
            c="";
            ans+=1;
            i+=1;
        }
    }
    cout << ans << endl;
}