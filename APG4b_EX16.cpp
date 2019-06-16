#include<bits/stdc++.h>
using namespace std;
void input(vector<int>& dat);
int syori(vector<int>& dat);
int main(){
  vector<int> data(5);
  input(data);
  int answer = syori(data);
  if(answer>0) cout << "YES" << endl;
  else cout << "NO" << endl;
}
void input(vector<int>& dat){
  for(int x=0;x<dat.size();x++){
    cin >> dat[x];
  }
}


int syori(vector<int>& dat){
  int i=0,answer = 0;
  while(i<dat.size()-1){
    if(dat.at(i) == dat.at(i+1)){
      answer++;
    }
    i++;
  }
  return answer;
}
