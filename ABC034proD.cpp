#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF = 9999999999;
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
    int N,K;cin >> N >> K;
    vector<pair<Int,Int>> vec(N);
    for(auto &i:vec) cin >> i.first >> i.second;
     double maxx = 0;
    for(Int bit=0;bit<(1<<N);bit++){
        double summizu = 0;
        double sumsyokuen = 0;
        int cu = 0;
        for(int i=0;i<N;i++){
            if(bit&(1<<i)){
                cu++;
                double syokuen = (vec[i].first*vec[i].second)/100;
                double mizu = vec[i].first - syokuen;
                summizu+=mizu;
                sumsyokuen+=syokuen;
            }
        }
        if(cu!=K) continue;
        /*std::stringstream ss;
        ss << std::bitset<8>(bit);
        std::string s = ss.str();
        cout << s << "  ";
        debug(sumsyokuen/(sumsyokuen+summizu)*100);*/
        chmax(maxx,sumsyokuen/(sumsyokuen+summizu)*100);
    }
    cout << maxx << endl;

}