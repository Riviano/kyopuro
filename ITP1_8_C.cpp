#include<bits/stdc++.h>
using namespace std;
int main(){
  char s;
  int a[26]={0};
  while(scanf("%c",&s)!=EOF){
    if('A'<=s&&s<='Z') a[(s-'A')]++;
    else if('a'<=s&&s<='z') a[(s-'a')]++;
  }
  for(int i=0;i<26;i++){
    cout << (char)(i+'a') << " : " << a[i] << endl;
  }
}
