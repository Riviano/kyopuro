#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i=0;i<3;i++){
    if((s.at(i)-'0')==1) s.at(i)='9';
    else if((s.at(i)-'0')==9) s.at(i)='1';
  }
  cout << s << endl;
}
