#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  int a[3];
  for(int i=0;i<n;i++){
    cin >> p.at(i);
  }
  int flag=0;
  for(int i=1;i<n-1;i++){
    a[0] = p[i-1];
    a[1] = p[i];
    a[2] = p[i+1];
    sort(a,a+3);
    if(a[1]==p[i]) flag++;
}
cout << flag << endl;
}
