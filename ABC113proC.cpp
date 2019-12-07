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
    Int n,m;cin >> n >> m;
    vector<pair<int,pair<int,pair<int,int>>>>  data(m);
    vector<int> sum(n+2,0);
    rep(i,m){
        int p,y;cin >> p >> y;
        data[i].first = p;
        sum[p+1]++;
        data[i].second.first = y;
        data[i].second.second.first = i+1;//後のp
        data[i].second.second.second = -1;
    }
    rep(i,n+2){
        sum[i+1] += sum[i];
    }
    //for(auto &i:sum) cout << " " << i;
    //cout << endl;
    sort(data.begin(),data.end());
    rep(i,m){
        data[i].second.second.second = i+1;
        int tmp = data[i].first;
        data[i].first = data[i].second.second.first;
        data[i].second.second.first = tmp;
    }
    sort(data.begin(),data.end());
    rep(i,m){
        printf("%06d%06d\n",data[i].second.second.first , data[i].second.second.second-sum[data[i].second.second.first]);
    }
    return 0;

    
}