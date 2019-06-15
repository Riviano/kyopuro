#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,x,n,count = 0;
while(1){
  cin >> n >> x;
  if(n==0&&x==0) break;
  for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
      for(k=j+1;k<=n;k++){
        if(i!=j&&j!=k&&i!=k){
          if(i+j+k==x){
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
  count = 0;
}
return 0;
}
