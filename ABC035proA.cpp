#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,h;cin >> w >>h;
  if(w%16==0&&h%9==0){
    cout << "16:9" << endl;
  }
  else if(w%4==0&&h%3==0) cout << "4:3" << endl;
  return 0;
}
