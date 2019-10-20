#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
  bool flag = true;
  int count=0;
  while(flag){
    flag = false;
    for(int i=n-1;i>=1;i--){
      if(a[i]<a[i-1]){
        swap(a[i],a[i-1]);
        count++;
        flag = true;
      }
    }
  }
  for(int i = 0;i<n;i++) {
    cout << a[i];
    if(i!=n-1) cout << " ";
  }
  cout << endl;
  cout << count << endl;
}
int main(){
  int n;cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  bubble(a,n);
  return 0;
}
