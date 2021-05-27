#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,x;
    cin >> a >> b >> x;
    if(a==0){
        cout << b/x+1 << endl;
        return 0;
    }
    a = (a-1)/x;
    b = b/x;
    cout << b-a << endl;
}