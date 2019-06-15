#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,num,s[13],h[13],c[13],d[13];
  char sign;
  cin >> n;
  for(int i=0;i<13;i++){
    s[i]=0;
    h[i]=0;
    c[i]=0;
    d[i]=0;
  }
  for(int i=0;i<n;i++){
    cin >> sign;
    switch(sign){
      case 'S':
      cin >> num;
      s[num-1] = 1;
      break;
      case 'H':
      cin >> num;
      h[num-1] = 1;
      break;
      case 'C':
      cin >> num;
      c[num-1] = 1;
      break;
      case 'D':
      cin >> num;
      d[num-1] = 1;
      break;
      default:break;
    }
  }
  for(int i=0;i<13;i++){
    if(s[i]==0) cout << "S" << " " << i+1 << endl;
  }
  for(int i=0;i<13;i++){
    if(h[i]==0) cout << "H" << " " << i+1 << endl;
  }
  for(int i=0;i<13;i++){
    if(c[i]==0) cout << "C" << " " << i+1 << endl;
  }
  for(int i=0;i<13;i++){
    if(d[i]==0) cout << "D" << " " << i+1 << endl;
  }
  return 0;
}
