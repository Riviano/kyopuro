#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,pi[5000],num=0,midle=0,md = 0,t;
  cin >>n;
  for(int i = 0;i<n;i++){
    cin >> pi[i];
  }
  while(1){
      midle = 0;
      if(pi[0]==1 && pi[1] ==1){
	
    for(int i = 0;i<n;i++){
        if(pi[i]>0 && pi[i+1]>0){
	  pi[i] = pi[i]-1;
	  pi[i+1] = pi[i+1]-1;
	  num = num+2;
	  midle = midle+1;
      }
	if(midle < n/2) md =1;
    }
    if(md==1) break;
  }
    for(int i=1;i<n-1;i++){
      num = num+(pi[i]*2);
      pi[i] = 0; 
    }
    num = num+pi[0];
    num = num+pi[n-1];
  cout << num << endl;

}
  
