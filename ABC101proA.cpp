#include<bits/stdc++.h>
using namespace std;
int main(){
  int x=0;
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='+') x++;
    else x--;
  }
  cout << x << endl;
}
