#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int x,count=0;
    cin >> x;
    if(x==0) break;
    int flag=1;
    int sum = 0;
    while(flag!=x){
      sum = 0;
      for(int i=flag;i<=x;i++){
        sum+= i;
        if(sum == x) count++;
      }
      flag++;
    }
    cout << count << endl;
  }
}
