#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    long long int ans = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]+a[i+1]>x){
            long long int tmp = a[i]+a[i+1]-x;
            if(tmp>a[i+1]){
                ans+=tmp;
                tmp-=a[i+1];
                a[i+1] = 0;
                if(tmp>a[i]) a[i] = 0;
                else a[i] -= tmp;
            }else{
                ans += tmp;
                a[i+1] -= tmp;
            }
            
        }
    }
    cout << ans << endl;
}