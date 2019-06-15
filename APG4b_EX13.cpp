#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
  int n,sum=0;cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a.at(i);
    sum += a.at(i);
  }
  sum/=n;
  for(int i=0;i<n;i++){
    cout << abs(sum-a.at(i)) << endl;
  }
}
