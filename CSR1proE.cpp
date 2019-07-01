#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> a(n);
  int flag = 0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i] == 1) flag = i+1;
  }
  cout << flag << endl;
}
  
