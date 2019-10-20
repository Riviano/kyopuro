#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  long long int i=0;
  cin >> a >> b;
  for(i=0;i<(a>b?a:b);i++){
    if(abs(a-i)==abs(b-i)){
      cout << i << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;

}
