#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,f,r,i=0;
  char a[50] = {};
  while(1){
    cin >> m >> f >> r;
    if(m==-1&&f==-1&&r==-1){
      break;
    }
    if(m==-1||f==-1){
      a[i] = 'F';
      i++;
    }else{
      if(f+m<30){
        a[i] = 'F';
      }
      if(30<=f+m&&f+m<50){
        if(r>=50){
          a[i] = 'C';
        }
        else{
          a[i] = 'D';
        }
      }
      if(50<=f+m&&f+m<65) a[i] = 'C';
      if(65<=f+m&&f+m<80) a[i] = 'B';
      if(80<=f+m) a[i] = 'A';
      i++;
    }
}
  for(int j=0;j<i;j++){
    cout << a[j] << endl;
  }
  return 0;
}
