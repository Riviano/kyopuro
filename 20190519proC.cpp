#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  double seek=0;
  
  cin >> n >> k;
  
  for(int i=1;i<=n;i++){
    int a=i;
    double asknum=1.0/n;
    while(a<k){
      a*=2;
      asknum /=2;
    }
    seek += asknum;
  }
  printf("%.12f\n",seek);
}
