#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,a,b;
  scanf("%d %d %d",&x,&a,&b);
  x++;
  printf("%d\n",x);
  x*=(a+b);
  cout << x << endl;
  x*=x;
  cout << x << endl;
  x--;
  cout << x << endl;
  return 0;

}
