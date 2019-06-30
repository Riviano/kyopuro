#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  bool ans = false;
  sort(s.begin(),s.end());
  if(s[0] == s[1] && s[2]==s[3]&&s[0]!=s[2]) ans = true;
  if(ans) puts("Yes");
  else puts("No");
  return 0;
}
