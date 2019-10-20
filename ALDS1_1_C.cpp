#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
  if(x==2) return true;
  if(x<2||x%2==0) return false;
  int i = 3;
  while(i<=sqrt(x)){
    if(x%i==0) return false;
    i+=2;
  }
  return true;
}

int main(){
  int n;
  int count=0;
  cin >> n;
  int a[n];
  for(auto& i:a) cin >> i;
  for(int i=0;i<n;i++){
    if(isprime(a[i])) count++;
  }
  cout << count << endl;
  return 0;
}
