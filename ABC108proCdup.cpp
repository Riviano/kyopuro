#include<iostream>
using namespace std;
typedef long long int Int;
int main(){
  Int n,k;cin >> n >> k;
  if(k&1){
    Int a = n/k;
    cout << a*a*a << endl;
  }else{
    Int a = n/k;
    Int b = (n+(k/2))/k;
    cout << a*a*a+b*b*b << endl;
  }
}
