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

int search(int A[],int n,int key){
  int i=0;
  A[n] = key;
  while(A[i]!=key) i++;
  return i!=n;
}

int main(){
  int i,n,A[10000+1],q,key,sum=0;
  cin >> n;
  rep(i,n) cin >> A[i];
  cin >> q;
  rep(i,q){
    cin >> key;
    if(search(A,n,key)) sum++;
  }
  cout << sum << endl;
  return 0;
}
