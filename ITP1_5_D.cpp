#include<iostream>
using namespace std;
int main(){
  int i;
  int x,n,t;
  cin >> n;
  for(i=1;i<=n;i++){
    
    
    for(x=i;10>x;x/=10)
    if(x%3==0){
      
      cout << " " << i;
      break;
    }
    else if(x%10==3){
      cout << " " << i;
      break;
    }
    else if(x/10==3){
      cout << " " << i;
      break;
    }
    
  }
  cout << endl;
  
}
