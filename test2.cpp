#include<iostream>
using namespace std;
int main(){
  int a,b,x,sum;
  sum = 0;
  cin >> a >> b >> x;
  if(a<2*b){
    sum = sum + a*(x/1000);
    if((x%1000)<=500 && a>b){
      sum = sum + b;
    }else {sum = sum+a;}
  }else{
    if(x%500 == 0)sum = b*(x/500);
    else sum = sum + b*(x/500)+b;
  }
    
  cout << sum << endl;
}
