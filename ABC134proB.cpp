#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,d;
  cin >> n >> d;
  int count = 0;
  int a=0;
  while(n>0){
    n-=(2*d+1);
    count++;

  }
  cout << count << endl;
}
