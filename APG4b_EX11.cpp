#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
 int n,a;cin >> n >> a;
 REP(i,n){
   bool flag = false;
   int b;
   char op;cin >> op >>b;
   switch(op){
     case '+':
                a+=b;
                cout << i+1 << ':' << a << endl;
                break;
     case '*':
                a*=b;
                cout << i+1 << ':' << a << endl;
                break;
     case '-':
                a-=b;
                cout << i+1 << ':' << a << endl;
                break;
     case '/':
                if(b==0){
                  flag = true;
                  cout << "error" << endl;
                }else{
                  a=a/b;
                cout << i+1 << ':' << a << endl;
                }
                break;
   }
   if(flag){
     break;
   }


 }
}
