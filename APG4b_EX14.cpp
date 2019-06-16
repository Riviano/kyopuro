#include<bits/stdc++.h>
using namespace std;
int main(){
  int math[3];
  for(int i=0;i<3;i++){
    cin >> math[i];
  }
  sort(math,math+3);
  cout << math[2]-math[0] << endl;
  return 0;
}
