#include<bits/stdc++.h>
using namespace std;
using Int = long long;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

//INSERT ABOVE HERE
signed main(){
  Int n,g;
  cin>>n>>g;
  vector<Int> p(n),c(n);
  for(Int i=0;i<n;i++) cin>>p[i]>>c[i];

  Int ans=0;
  for(Int i=0;i<n;i++) ans+=p[i];

  for(Int b=0;b<(1<<n);b++){
    Int res=0,sum=0;
    for(Int i=0;i<n;i++){
      if(b&(1<<i)){
	res+=p[i];
	sum+=p[i]*100*(i+1)+c[i];
      }
    }
    //cout<<res<<" "<<sum<<endl;
    for(Int i=n-1;i>=0;i--){
      if(b&(1<<i)) continue;
      Int x=p[i];
      chmin(x,(g-sum+100*(i+1)-1)/(100*(i+1)));
      chmax(x,0);
      res+=x;
      sum+=x*100*(i+1);
    }
    //cout<<res<<" "<<sum<<endl;
    if(sum>=g) chmin(ans,res);
  }

  cout<<ans<<endl;
  return 0;
}
