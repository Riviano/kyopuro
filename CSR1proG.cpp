#include<bits/stdc++.h>
using namespace std;
long long  int MOD = 1000000007;
int main(){
  int n;cin >> n;
  string s;cin >> s;
  char* ss;
  for(int i=0;s.size();i++){
    if(s.at(i) =='\n')
      continue;
    
    else{
      *ss = s.at(i);
      ss++;
    }
  }
  string strs = ss;
  cout << strs << endl;
  /*
  long long int sum =0;
  long long int poww;
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++){
    poww = pow(10,n-1-i);
    if(poww>MOD) poww%=MOD;
    sum += a[i]*poww;
    sum %= MOD;
  }
  cout << sum << endl;
  */
}

  
