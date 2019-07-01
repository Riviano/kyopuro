#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> A(n);
  vector<int> B(m);
  vector<int> C(m);

  priority_queue<pair<int, int > > v;
  for(int i=0;i<=n-1;i++){
    cin >>A[i];
    v.push(make_pair(A[i], 1));
  }
  for(int i=0;i<=m-1;i++){
    cin >> B[i] >> C[i];
    
    
}
    

