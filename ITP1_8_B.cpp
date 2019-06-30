#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int sum;
  while(1){
    cin >> s;
      sum = 0;
    for(int i=0;i<s.size();i++){
      sum += s.at(i) - '0';
    }
    if(sum!=0) cout << sum << endl;
    else break;
  }
}
