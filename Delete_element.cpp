#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec = {1,2,3};
  vec.pop_back();
  for(int i=0;i<vec.size();i++){
    cout << vec.at(i) << endl;
  }
  return 0;
}
