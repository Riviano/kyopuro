#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,temp=0;
  int a[100][100],b[100],c[100];
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      temp+=a[i][j]*b[j];
    }
    cout << temp << endl;
    temp = 0;
  }
  return 0;
}
