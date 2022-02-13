#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N,K,L;
ll A[1 << 18];

/**
 * @brief 二分探索
 * @param M 二分探索した値
 * @return M以上の長さでK+1個の部分集合があるか
 */
bool solve(ll M){
    ll cnt = 0,pre = 0;
    for(int i=1;i <= N;i++){
        if(A[i] - pre >= M && L - A[i] >= M){
            //cout << "pre:" << pre << " A[i]:" << A[i] << " M:" << M << endl;
            cnt++;
            pre = A[i];
        }
    }
    if(cnt >= K) return true;
    return false;
}

int main(){
    cin >> N >> L >> K;
    for(int i=1;i <= N;i++) cin >> A[i];
    ll left = -1;
    ll right = L+1;
    while(right - left > 1){
        ll mid = left + (right-left)/2;
        if(solve(mid) == false) right = mid;
        else left = mid;
    }
    cout << left << endl;
}
