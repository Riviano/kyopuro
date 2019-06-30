#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int abc[26]={0};
  cin >> s;
  int flag;
  for(int i=0;i<4;i++){
    flag =s.at(i)-'0';
    flag=flag%26;
    abc[flag]++;
  }
  flag =0;
  bool yeno = true;
  for(int i=0;i<26;i++){
    if(abc[i]==2) flag++;
  }
  if(flag != 2) yeno=false;

  if(yeno) cout << "Yes" << endl;
  else cout << "No" << endl;
}
