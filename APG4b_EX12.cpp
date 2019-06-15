#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin >> s;
  int sum = 1;
  for(int i=0;i<s.size();i++){


      if(s.at(i) =='-') sum -=1;
      else if(s.at(i) =='+') sum +=1;
  }
  cout << sum << endl;
}
