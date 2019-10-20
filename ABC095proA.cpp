#include<bits/stdc++.h>
using namespace std;
int main(){
  int x = 700;
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='o') x+=100;
  }
  cout << x << endl;
}
