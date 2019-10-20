#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){

  char s;
  vector<char> n;
  while(cin >> s){
    if(s!='+'&&s!='-'&&s!='*') n.push_back(s);
    else{
      int a = n[n.size()-1]-'0';
      int b = n[n.size()-2]-'0';
      n.pop_back();
      n.pop_back();
      if(s=='+'){
        n.push_back((a+b)+'0');
      }
      if(s=='-'){
        n.push_back((a-b)+'0');
      }
      if(s=='*'){
        n.push_back((a*b)+'0');
      }
    }
  }
  if(n.size()>=2) 
  cout << n.back() << endl;
}
