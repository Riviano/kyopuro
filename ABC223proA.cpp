# include<bits/stdc++.h>
using namespace std;

typedef struct box{
    long long int number;
    vector<long long int> a;
}box;
vector<box> L;
long long int N,X;

/**
 * @brief 探索
 * @note
 * @param Li 
 * @param sum 総積
 * @return 
 */
long long int tansaku(long long int Li,long long int sum=1){
    if(Li==N) return sum == X;
    long long int ans = 0;
    for(long long int i=0;i<L[Li].number;i++){
        if(sum>X/L[Li].a[i]) continue;
        ans += tansaku(Li+1,sum*L[Li].a[i]);
    }
    return ans;
}

signed main(){
    cin >> N >> X;
    L.assign(N,box());
    for(long long int i=0;i<N;i++){
        cin >> L[i].number;
        L[i].a.resize(L[i].number);
        for(long long int j=0;j<L[i].number;j++){
            cin >> L[i].a[j];
        }
    }
    long long int ans = 0;
    ans = tansaku(0);
    cout << ans << endl;
}
