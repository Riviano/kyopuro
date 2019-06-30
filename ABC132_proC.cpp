#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> d(n);
  for(int i=0;i<n;i++){
    cin >> d[i];
  }
  int be = 0,t=0;
  sort(d.begin(),d.end());
  for(int i=1;i<=d[n-1];i++){
    be = 0;
    for(int j=((int)(n/2)-1);j>=0;j--){
      if(i>d[j]) be=be+1;
    }
    if(be==n/2+1){
      for(int i=1;i<=d[n-1];i++){
        be = 0;
        for(int j=((int)(n/2));j<n;j++){
          if(i<=d[j]) be=be+1;
        }
        if(n-be==be) t++;
    }
  }

  }
  cout << t << endl;
}
