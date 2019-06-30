#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[9];
  string s;
  int flag=10;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(flag==s.at(i)-'0'){
      cout << "Bad" << endl;
      return 0;
    }
    else flag = s.at(i)-'0';
  }
  cout << "Good" << endl;
  return 0;
}
