#include<bits/stdc++.h>
using namespace std;
int main(){
    int first;
    cin >> first;
    string s;
    s = to_string(first);
    long long int ans = 0;
    for(int i = 0;i<s.size();i++){
        if(i==0){
            ans+=first;
        }
        
        string a = s.substr(0,i);
        string b = s.substr(i);
        try{
            ans += stoi(a)+stoi(b);
        }catch(invalid_argument){
            cout << "a:" << a << " " << "b:" << b << endl;
            cout << "error" << endl;
        }
        
    }
    for(auto &i:s){
        ans+=i-'0';
    }
    cout << ans << endl;
}