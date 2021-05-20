#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    long int k;
    cin >> s >> k;
    auto count = [&](string s){
      long int c = 0;
            for(long int i = 0;i<s.size()-1;i++){
              if(s[i]==s[i+1]){
                s[i+1] = s[i+2]+1;
                c++;
              }
            }
            c *= k;
            return c;
    };
    if(s.size()<=1){
      cout << k/2 << endl; 
    }else{
        if(s[0]==s[s.size()-1]){
           long long int sc = 0;
           for(long int i = 0;s[i]==s[i+1] && i < s.size()-1;i++){
              sc++;
           }
          long long int ec = 0;
           for(long int i = s.size()-1;s[i]==s[i-1] && i >=1;i--){
             ec++;
           }
           sc++;
           ec++;
           //cout << "sc: " << sc << "ec: " << ec << endl;
           if(sc==s.size()){
             cout << (s.size()*k)/2 << endl;
             return 0;
           }
           if(sc%2==1&&ec%2==1){
             cout << count(s)+k-1 << endl;
           }else{
             cout << count(s) << endl;
           }
        }else{
          cout << count(s) << endl;
      }
    }
}
