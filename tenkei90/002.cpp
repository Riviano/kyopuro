#include<bits/stdc++.h>
using namespace std;

/**
 * @brief 正しいカッコかどうか判定
 * @param s 判定する文字列
 * @return 正しいカッコならtrue
 **/
bool check(string s){
    int cnt = 0;
    
    for(int i=0;i < s.size();i++){
        if(s[i] == '(') cnt++;
        if(s[i] == ')') cnt--;
        if(cnt < 0) return false;
    }

    if(!cnt) return true;
    return false;
}
int main(){
    int N;
    cin >> N;
    for(int i=0;i < (1<<N);i++){
        string s;
        for(int j=N-1;j>=0;j--){
            if(i & (1<<j)) s += ')';
            else s += '(';
        }
        if(check(s)) cout << s << endl;
    }
    return 0;
}