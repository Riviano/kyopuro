#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int x;
    cin >> t;
    for(int i=0; i<t;i++){
        int a,b,c;
        int k;
        cin >> a >> b >> c;
        x = (b>=a?(b-a)*2:(a-b)*2);
        if(x/2 >= c){
            k = c+x/2; 
        }else{
            k = x/2 - c;
        }
        cout << "k:" << k << "x:" << x << endl;
        if(k>x || c>x) cout << -1 << endl;
        else cout << k << endl;
    }
}



