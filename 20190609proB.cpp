#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,tg,smin=100000;
  cin >> n;
  vector<int> w(n);
  for(int i=0;i<n;i++){
    cin >> w[i];
  }
  for(int t=0;t<n;t++){
    int s1 = 0;
    int s2 = 0;
    tg = w[t];

    for(int i=0;i<n;i++){
      if(i<=t) s1+= w[i];
      else s2 += w[i];

    }

    int sa = s1-s2;

    if(sa<0) sa *= -1;

    smin = min(smin,sa);
  }
  cout << smin << endl; 
}




  
  
