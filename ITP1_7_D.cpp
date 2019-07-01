#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[100][100],b[100][100],n,m,l,c[100][100]={};
  cin >> n >> m >> l;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      cin >> a[i][j];
    }
  }

  for(int i=0;i<
    
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      cout << " " << c[i][j];
    }
    cout << endl;
    }
  return 0;
}
