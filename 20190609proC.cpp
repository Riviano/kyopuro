#include<bits/stdc++.h>
#define amari 1000000007
using namespace std;
int main(){
  int n,m,a,sum = 1;
  cin >> n >> m;
 
  vector<int> kaidan(n,0);
  for(int t=0;t<m;t++){
    cin >> a;
    kaidan[a-1] = 1;
  }
  int s=0;
  while(s!=n-1){

    if(kaidan[s]==1&&kaidan[s+1]==1){
      sum *= 0;
    }else{

      if(kaidan[s]==0&&kaidan[s+1]==0){
	sum *=2 ;
	s+=2;
      }else{

	if(kaidan[s]==0&&kaidan[s+1]==1){
	  s++;

	}else{
	  if(kaidan[s]==1&&kaidan[s+1]==0){
	    s+=2;
	  }
	}
      }
    }
  }
  cout << sum << endl;
}
    
  
  
