#include<bits/stdc++.h>
using namespace std;
int main(){
  char x,y;
  cin >> x >> y;
  int a=x-'A';
  int b=y-'A';
  cout << ((a>=b)?((a==b)?"=":">"):"<") << endl;
}
