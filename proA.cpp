#include<bits/stdc++.h>
using namespace std;
int main(){
  int E,Y;
  int M=1912,T=1926,S=1989,H=2020;
  cin >> E >> Y;
  if(E ==0){
    
    if(Y<M) cout << "M" << (Y-1868)+1 << endl;
    if(Y<T && M<=Y) cout << "T" << Y-M+1 << endl;
    if(Y<S && T<=Y) cout << "S" << Y-T+1 << endl;
    if(Y<H && S<=Y) cout << "H" << Y-S+1 << endl;
  }else{
    Y = Y-1;
    if(E == 1) cout << 1868+Y << endl;
    if(E == 2) cout << M+Y << endl;
    if(E == 3) cout << T+Y << endl;
    if(E == 4) cout << S+Y << endl;
  }
  return 0;

}
