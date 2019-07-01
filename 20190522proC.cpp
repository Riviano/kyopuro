#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long  num =1,kosuu = 0;
  cin >> n;
  for(int i=1;i<=n;i++){
    num *=i;
    
  }
  for(int i=1;i<=num;i++){
    if(num%i==0){
      kosuu++;
    }
  }

  cout << kosuu%(10^9+7) << endl;
  return 0;
}
  
