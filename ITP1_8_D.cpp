#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b;
  cin >> a >> b;
  int count=0;
  for(int i=0;i<a.size();i++){
    for(int j=0;j<b.size();j++){
      if(a[i]==b[j]) count++;
    }
  }
  cout << count << endl;
  if(count >= b.size()) cout << "Yes" << endl;
}
