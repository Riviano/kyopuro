#include<bits/stdc++.h>
using namespace std;
bool kaiseki(int a){
  string str;
  str = std::to_string(a);
  bool flag = true;
  for(int i=0;i<str.size()/2;i++){
    if(str[i]!=str[str.size()-1-i]) flag = false;
  }
  return flag;
}
int main(){
  int a,b;cin >> a >> b;
  int ans = 0;
  for(int i=a;i<=b;i++){
    if(kaiseki(i)) ans++;
  }
  cout << ans << endl;
}
