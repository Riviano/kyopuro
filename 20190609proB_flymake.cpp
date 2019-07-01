#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,tg;
  cin >> n;
  vector<int> w(n);
  for(int i=0;i<n;i++){
    cin >> w[i];
  }
  for(t=0;t<n;t++){
    tg=w[t];
    sort(w,w+n