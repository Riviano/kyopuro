#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  if(n<=59) cout << "Bad" << endl;
  else if(60<=n&&n<90) cout << "Good" << endl;
  else if(n<100) cout << "Great" << endl;
  else cout << "Perfect" << endl;
  return 0;
}
