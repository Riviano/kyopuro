#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin >> a >> b;
  for(int i=0;i<=15;i++){
    if(i%2==0) a--;
    else if(i%2==1) b--;
  }

  if(a>0||b>0) cout << ":(" << endl;
  else cout << "Yay!" << endl;
  return 0;
}
