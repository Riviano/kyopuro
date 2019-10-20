#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> a(3);
  for(int i=0;i<3;i++) cin >> a[i];
  if(a[2]>=a[1]&&a[2]>=a[0]){
    if(a[1]>=a[0]){
      cout << 3 << endl;
      cout << 2 << endl;
      cout << 1 << endl;
    }
    else{
      cout << 2 << endl;
      cout << 3 << endl;
      cout << 1 << endl;
    }
  }

  if(a[1]>=a[0]&&a[1]>=a[2]){
    if(a[2]>=a[0]){
      cout << 3 << endl;
      cout << 1 << endl;
      cout << 2 << endl;
    }
    else{
      cout << 2 << endl;
      cout << 1 << endl;
      cout << 3 << endl;
    }
  }
  if(a[0]>=a[1]&&a[0]>=a[2]){
    if(a[1]>=a[2]){
      cout << 1 << endl;
      cout << 2 << endl;
      cout << 3 << endl;
    }
    else{
      cout << 1 << endl;
      cout << 3 << endl;
      cout << 2 << endl;
    }
  }
}
