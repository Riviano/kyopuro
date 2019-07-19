#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  cin >> h >> w;
  int hh,ww;
  cin >> hh >> ww;
  h-=hh;
  w-=ww;
  cout << w*h << endl;
}
