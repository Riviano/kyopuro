#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3];
  int se=0,go=0;
  for(int i=0;i<3;i++){
    cin >> a[i];
    if(a[i]==7) se++;
    else if(a[i]==5) go++;
  }

  cout << (se==1&&go==2?"YES":"NO") << endl;
}
