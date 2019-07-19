#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans=0;
  vector<int> a(1,0);
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int d;
    cin >> d;
    if(a.back() < d){
      a.push_back(d);
      ++ans;
    }else{
      while(a.back() > d) a.pop_back();
      if(a.back()!=d){
        a.push_back(d);
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
