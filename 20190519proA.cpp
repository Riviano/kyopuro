#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  vector<char> s(n);
  for(int i=0;i<n;i++){
    cin >> s[i];
    if(i==(k-1)){
      s[i]+=32;
    }
  }
  for(int i=0;i<n;i++){
    cout << s[i];
  }
  cout << endl;
  return 0;
}
