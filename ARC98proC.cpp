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
    int n;cin >> n;
    string s;cin >> s;
    vector<pair<int,int>> left(s.size());//w,eの順
    vector<pair<int,int>> right(s.size());
    if(s[0]=='E') left[0].second = 1;
    else left[0].first = 1;

    if(s[n-1]=='E') right[n-1].second = 1;
    else right[n-1].first = 1;

    for(int i=1;i<n;i++){
        if(s[i]=='E'){
            left[i].second = left[i-1].second+1;
            left[i].first = left[i-1].first;
        }else if(s[i]=='W'){
            left[i].first = left[i-1].first+1;
            left[i].second = left[i-1].second;
        }

        if(s[n-i-1]=='E'){
            right[n-1-i].second = right[n-1-i+1].second+1;
            right[n-1-i].first = right[n-1-i+1].first;
        }else{
            right[n-1-i].first = right[n-1-i+1].first+1;
            right[n-1-i].second = right[n-1-i+1].second;
        }
    }
    /*cout << "left" << endl;
    for(auto &i:left){
        cout << i.first << " ";//w
    }
    cout << endl;
    for(auto &i:left){
        cout << i.second << " ";//e
    }
    cout << endl;
    cout << "right" << endl;
    for(auto &i:right){
        cout << i.first << " ";//w
    }
    cout << endl;
    for(auto &i:right){
        cout << i.second << " ";//e
    }
    cout << endl;*/
    Int ans = INF;
    for(int i=0;i<n;i++){
        Int tmp=0;
        if(i-1>=0){
            tmp+=left[i-1].first;
        }
        if(i+1<n){
            tmp+=right[i+1].second;
        }
        //debug(tmp);
        ans = min(ans,tmp);
    }
    cout << ans << endl;
}