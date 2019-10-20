#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
using LL = long long;
using VI = vector<int>;

LL cnt;
int l;
int a[1000000];
int n;
VI g;

void insert(int a[],int n,int g){
  REP(i,g,n){
    int v = a[i];
    int j = i-g;
    while(j>=0&&a[j]>v){
      a[j+g]=a[j];
      j-=g;
      cnt++;
    }
    a[j+g] = v;
  }
}

void shell(int a[],int n){
  for(int h=1;;){
    if(h>n) break;
    g.push_back(h);
    h=3*h+1;
  }
  for(int i=g.size()-1;i>=0;i--){
    insert(a,n,g[i]);
  }
}

int main(){
  cin >> n;
  rep(i,n) scanf("%d",&a[i]);
  cnt = 0;
  shell(a,n);
  cout << g.size() << endl;
  for(int i=g.size()-1;i>=0;i--){
    printf("%d",g[i]);
    if(i) printf(" ");
  }
  printf("\n");
  printf("%d\n",cnt);
  rep(i,n) printf("%d\n",a[i]);
  return 0;
}
