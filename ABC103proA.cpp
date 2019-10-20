#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3];
  for(auto& i:a) cin >> i;
  sort(a,a+3);
  cout << abs(a[2]-a[1])+abs(a[1]-a[0]) << endl;
}
