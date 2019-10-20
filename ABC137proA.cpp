#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;cin >> a >> b;
int wa=a+b,sa=a-b,seki=a*b;
wa = max({wa,sa,seki});
cout << wa << endl;
}
