#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[5],k;
  for(int i=0;i<5;i++){
    cin >> a[i];      /* code */
    }
    cin >> k;
    sort(a,a+5);
    if(a[4]-a[0]<=k) cout << "Yay!" << endl;
    else cout << ":(" << endl;

}
