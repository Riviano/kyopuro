#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x=0,max=0;
  string name;
  cin >> n >> name;
  for(int i=0;i<n;i++){
    
    if(name[i]=='I'){
      x += 1;
    }else if(name[i]=='D') {
     x -= 1;
    }
    if(max<x){
      max = x;
    }
  }
  cout << max << endl;
  return 0;
}
