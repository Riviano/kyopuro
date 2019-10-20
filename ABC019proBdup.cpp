#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin >> s;
  for(int i=0;i<(int)s.size();i++){
    cout << s[i];
    int t=1;
    while(i+1<(int)s.size()&&s[i]==s[i+1])i++,t++;
    cout << t;
  }
  cout << endl;
  return 0;
}
