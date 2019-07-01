#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,h,c,i,num,hd,wd;
  int sum = 0;
  cin >> w >> h >> c;
  hd = h;
  wd = w;
  if(hd == wd) cout << c << endl;
  else{
    while(1){
      if(w>h){
	if(w%h == 0){
	  num = h;
	  break;
	}
	w = w%h;
      }
      if(h>w){
	if(h%w == 0){
	  num =w;
	  break;
	}
	h = h%w;
      }
    }
 

  cout << ((hd*wd)/(num*num))*c << endl;
  }
  return 0;
}
