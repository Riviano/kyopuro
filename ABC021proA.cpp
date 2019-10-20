#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> ans;
  while(n>0){
    if(n>=8) n-=8,ans.push_back(8);
    else if(n>=4) n-=4,ans.push_back(4);
    else if(n>=2) n-=2,ans.push_back(2);
    else n--,ans.push_back(1);
  }
  cout << ans.size() << endl;
  for(auto& i:ans) cout << i << endl;
}
