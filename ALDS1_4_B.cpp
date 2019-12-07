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
bool binarysearch(int key,vector<int> a,int n){
  int left = 0,right = n;
  int mid;
  while(left<right){
    mid = (left+right)/2;
    if(a[mid]==key) return true;
    else if(a[mid]<key){
      left = mid+1;
    }
    else if(a[mid]>key){
      right = mid;
    }
  }
  return false;
}
int main(){
  int n;cin >> n;
  vector<int> s(n);
  rep(i,n) cin >> s[i];
  int q;cin >> q;
  int count=0;
  rep(i,q){
    int key;cin >> key;
    if(binarysearch(key,s,n)) count++;
  }
  cout << count << endl;
}
