#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> y(n);
  vector<int> m(n);
  vector<int> d(n);
  vector<int> ans(n);
  for(int i=0;i<n;i++){
    cin >> y[i] >> m[i] >> d[i];
    for(int j=y[i]+1;j<=999;j++){
      if(j%3 == 0){
	ans[i]+=200;
      }
      else{
	ans[i]+=195;
      }
    }
    for(int k = m[i]+1;k<=10;k++){
      if(y[i]%3==0){
	ans[i]+=20;
	  }else if(k%2 ==0){
	ans[i] += 19;
      }else if(k%2 == 1){
	ans[i] += 20;
      }
    }
    int flag;
    if(y[i]%3 == 0) flag = 20;
    else if(m[i]%2 == 0) flag = 19;
    else if(m[i]%2 == 1) flag = 20;
    for(int l = d[i];l<flag;l++){
      ans[i]++;
    }
    ans[i]=ans[i]+1;
  }
  y.pop_back();
    m.pop_back();
      d.pop_back();
  for(int o=0;o<n;o++){
    cout << ans[o] << endl;
  }
  ans.pop_back();
  return 0; 
}
  
