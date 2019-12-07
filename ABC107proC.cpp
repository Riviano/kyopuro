#include<iostream>
#include<vector>
using namespace std;

int n,k;
vector<long long> x;
int main(){
  cin >> n >> k;
  x.resize(n);
  for(auto &i:x) cin >> i;
  long long res = 1LL<<60;
  for(int i=0;i+k-1<n;i++){
    long long left = x[i],right = x[i+k-1];
    res = min(res,min(abs(left),abs(right))+right-left);
  }
  cout << res << endl;
}
