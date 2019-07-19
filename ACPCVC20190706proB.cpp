#include<bits/stdc++.h>
using namespace std;
using Int = long long;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  Int a;
  cin >> a;
  while(a--){
    const Int n = 9;
    vector<Int> as(n),bs(n);
    for(Int i=0;i<n;i++) cin >> as[i];
    for(Int i=0;i<n;i++) cin >> bs[i];
    sort(as.begin(),as.end());
    Int num=0,cnt=0;
    do{
      Int x=0,y=0;
      for(Int i =0;i<n;i++){
        if(as[i]<bs[i]) x+=as[i]+bs[i];
        if(as[i]>bs[i]) y+=as[i]+bs[i];
      }
      if(x<y) num++;
      cnt++;
    }while(next_permutation(as.begin(),as.end()));
    double A=(double)num/cnt;
    double B=1.0-A;
    cout << fixed<<setprecision(5);
    cout << A << " " << B << endl;


  }
  return 0;
}
