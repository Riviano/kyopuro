#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string,int> a;
  string s;
  for(int i=0;i<3;i++){
    cin >> s;
    a[s]++;
  }
  for(auto&i:a){
    if(i.second%2==1) cout << i.first << endl;
  }
  return 0;
}
