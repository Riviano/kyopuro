#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0,flag=0;
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=1;i<=n;i++){
    
      for(int j=i;j<n;j++){
	sum +=j;
	if(sum == n) flag++;
      }
      sum =0;
    }
    cout << flag << endl;
    flag = 0;
  }
}

