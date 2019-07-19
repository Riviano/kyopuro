#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin >> a;
  int bi=0,wi=0;
  int count = 0;
  for(int i=1;i<a.size();i++){
    if(a[i]=='B'){
      if(a[i-1]!='B') count++;
    }
    else{
      if(a[i-1]!='W') count++;
    }

}
cout << count  << endl;
}
