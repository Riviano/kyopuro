#include<iostream>
#include<vector>
#include<cmath>
const int INF = 999999999;
using namespace std;
void chmin(int &a,int b) {if(a>b) a=b;}
int N,A,B,C;
vector<int> l;

int rec(int i,int a,int b,int c){
  if(i==N){
    if(!a || !b || !c) return INF;
    return abs(a-A)+abs(b-B)+abs(c-C);
  }
  int res = rec(i+1,a,b,c);

  chmin(res,rec(i+1,a+l[i],b,c)+(a?10:0));
  chmin(res,rec(i+1,a,b+l[i],c)+(b?10:0));
  chmin(res,rec(i+1,a,b,c+l[i])+(c?10:0));

  return res;
}

int main(){
  cin >> N >> A >> B >> C;
  l.resize(N);
  for(int i=0;i<N;i++) cin >> l[i];
  cout << rec(0,0,0,0) << endl;
}