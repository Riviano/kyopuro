#include<bits/stdc++.h>
using namespace std;
int main(){
  char s;
  int num;
  int mozi[26]={ 0 };
  while(1){
    cin >> s;
    if(s='\n') break;
    int num = s - 'a';
    mozi[num]++;

    }
    for(int i=0;i<26;i++){
      cout << (char)('a'+i) << " : " << mozi[i] << endl;
    }
    return 0;
  }
