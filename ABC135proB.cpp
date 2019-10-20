#include<bits/stdc++.h>
using namespace std;
bool hantei = true;
bool miru(int a[],int n){
  bool flag = true;
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
      flag = false;
      //cout << "i " << i << " " <<a[i] << " i+1 " <<  i+1 << " "<< a[i+1] << endl;
    }
  }
  if(flag){
    cout << "YES" << endl;
    return flag;
  }
  else return flag;
}
int main(){
  int n;
  cin >> n;
  int p[n];
  for(int i=0;i<n;i++){
    cin >> p[i];
  }
  //for(int i=0;i<n;i++) cout << p[i] << " ";
  //cout << endl;
  if(miru(p,n)){
    return 0;
  }
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(p[i]>p[j]){
        int tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
        if(!(miru(p,n))){
          tmp = p[i];
          p[i] = p[j];
          p[j] = tmp;
        }
         else return 0;
      }

    }
  }
   cout << "NO" << endl;
}
