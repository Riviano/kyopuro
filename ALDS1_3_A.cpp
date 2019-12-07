#include<bits/stdc++.h>
using namespace std;
int top,S[1000];

void push(int x){
  top = top+1;
  S[top] = x;
}
int pop(void){
  top--;
  return S[top+1];
}
int main(){
  int a,b;
  top = 0;
  char k[100];
  while(scanf("%s",k)!=EOF){
    if(k[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }else if(k[0]=='-'){
      b=pop();
      a=pop();
      push(a-b);
    }else if(k[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }else{
      push(stoi(k));
    }
  }
  cout << pop() << endl;
}
