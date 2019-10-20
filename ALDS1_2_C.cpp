#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
using LL = long long;
using VI = vector<int>;
struct card{char suit,value;};

void bubble(struct card a[],int n){
  rep(i,n){
    for(int j=n-1;j>=i;j--){
      if(a[j].value < a[j-1].value){
        card t = a[j];a[j] = a[j-1];a[j-1] = t;
      }
    }
  }
}
void select(struct card a[],int n){
  rep(i,n){
    int minj = i;
    REP(j,i,n){
      if(a[j].value<a[minj].value) minj = j;
    }
    card t = a[i];a[i] = a[minj];a[minj] = t;
  }
}
void print(struct card a[],int n){
  rep(i,n){
    if(i>0) cout << " ";
    cout << a[i].suit << a[i].value;
  }
  cout << endl;
}

bool isstable(struct card c1[],struct card c2[],int n){
  rep(i,n){
    if(c1[i].suit!=c2[i].suit) return false;
  }
  return true;
}

int main(){
  card c1[100],c2[100];
  int n;cin >> n;
  rep(i,n) cin >> c1[i].suit >> c1[i].value;
  rep(i,n) c2[i] = c1[i];
  bubble(c1,n);
  select(c2,n);
  print(c1,n);
  cout << "Stable" << endl;
  print(c2,n);
  if(isstable(c1,c2,n)){
    cout << "Stable" << endl;
  }else{
    cout << "Not stable" << endl;
  }

}
