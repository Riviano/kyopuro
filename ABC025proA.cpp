#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int n;
  cin >> s >> n;
  vector<string> a;
  string  t,u;
  cout << s[(n-1)/5] << s[(n-1)%5] << endl;
  /*for(int i=0;i<s.size();i++){
    for(int j=0;j<s.size();j++){
      t=s[i];
      u=s[j];
      a.push_back(t+u);
    }
  }
  sort(a.begin(),a.end());
  */
  /*for(int i=0;i<a.size();i++){
    cout << a[i] << endl;
  }*/
  //cout << a.at(n-1) << endl;
}
