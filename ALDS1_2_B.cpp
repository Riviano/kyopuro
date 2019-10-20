#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
using LL = long long;
using VI = vector<int>;
int selectionSort(int a[],int n){
  int t,sw = 0,minj;
  rep(i,n-1){
    minj = i;
    REP(j,i,n){
      if(a[j]<a[minj]) minj = j;
    }
    t = a[i];
    a[i] = a[minj];
    a[minj] = t;
    if(i!=minj) sw++;
  }
  return sw;

}

int main(){
  int a[100],n,sw;
  cin >> n;
  rep(i,n) cin >> a[i];
  sw = selectionSort(a,n);
  rep(i,n){
    if(i>0) printf(" ");
    cout << a[i];
  }
  cout << endl;
  cout << sw << endl;
}
