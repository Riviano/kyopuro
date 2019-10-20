#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;cin >> a;
  int x,y;
  (a%2==0?(x=a/2,y=a/2):(x=a/2,y=a/2+1));
  cout << x*y << endl;
}
