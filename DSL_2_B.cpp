#include<bits/stdc++.h>
using namespace std;

#define SEG_LEN (1<<18)

int seg[SEG_LEN*2];

void add(int i,int x){
    i+=SEG_LEN;
    seg[i] +=x;
    while(1){
        i/=2;
        if(i==0) break;
        seg[i] = seg[i*2]+seg[i*2+1];
    }
}

int sum(int l,int r){
    l+=SEG_LEN;
    r+=SEG_LEN;
    int ans = 0;
    while(l<r){
        if(l&1){
            ans+=seg[l];
            l++;
        }
        l/=2;
        if(r&1){
            ans+=seg[r-1];
            r--;
        }
        r/=2;
    }
    return ans;
}

int main(){
    int n,q;cin >> n >> q;
    for(int i=0;i<q;i++){
        int cmd;cin >> cmd;
        if(cmd==0){
            int i,x;cin >> i >> x;
            add(i,x);
        }else{
            int l,r;cin >> l >> r;
            cout << sum(l,r+1) << endl;
        }
    }
}
