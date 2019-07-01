#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long int pnsub=1,pn,sum=0;
  cin >> n;
  if(n==0) pn=2;
  else{
    for(int i=0;i<n;i++){
      pnsub *= 2;
    }
    pn = pnsub;
    while(1){
      int flag = 0;
      pn++;
      for(int i=1;i<=pn;i++){
	if(pn%i==0) flag++;
      }
      if(flag == 2) break;
    }
  }
  int flag = 0;
  int i = 1;
  while(1){
    if(flag == pn-1) break;
    sum += i;
    i *= 10;
    flag++;

  }
  cout << sum%pn << endl;
  
}
