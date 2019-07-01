#include<bits/stdc++.h>
using namespace std;
int main(){
  string o;
  string e;
  int s=0,t=0;
  cin >>o;
  cin >>e;
  
  for(int i=1;i<=100;i++){
    if(o[s]=='\0'&&e[t]=='\0') break;
    if(i%2==1){
      cout << o[s];
      s++;
	}
    else{
      cout << e[t];
      t++;
    }
  }
  cout << endl;
  return 0;
}
