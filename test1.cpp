#include<iostream>
using namespace std;
int main(){
  int n,c,pi[100],sum,mine,i;
  sum = 0;
  cin >> n >> c;
  for(i=0;i<c;i++){
    cin >> pi[i];
    sum = sum + pi[i];
  }
  if(sum%(n+1)==0) mine = sum/(n+1);
  else mine = sum/(n+1)+1;
  cout << mine << endl;

}
