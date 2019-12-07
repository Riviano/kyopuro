#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
#define M 1046527
#define NIL (-1)
#define L 14
char H[M][L];
int getChar(char ch){
  if(ch=='A') return 1;
  else if(ch=='C') return 2;
  else if(ch=='G') return 3;
  else if(ch=='T') return 4;
  else return 0;
}
Int getKey(char str[]){
  Int sum=0,
}

int h1(int key){return key%M;}
int h2(int key){return 1+(key%(M-1));}
int find(char str[]){

}
insert(char str[]){
  Int key,i,h;
  key = getKey(str);
  for(i-0;;i++){
    h=(h1(key)+i*h2(key))%M;
    if(strcmp(H[h],str)==0) return 1;
  }
}
int main(){
  int i,n,h;
  char str[L],com[9];
  for(i=0;i<M;i++) H[i][0] = '\0';
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",com,str);
    if(com[0]=='i'){
      insert(str);
    }else{
      if(find(str)){
        cout << "yes" << endl;
      }else{
        cout << "no" << endl;
      }
    }
  }
  return 0;
}
