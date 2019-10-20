#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[5],k;
  bool flag = false;
  for(auto& i:a) cin >> i;
  cin >> k;
  for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
      if(a[j]-a[i]>k) flag = true;
    }
  }
  if(flag) cout << ":(" << endl;
  else cout << "Yay!" << endl;
}
