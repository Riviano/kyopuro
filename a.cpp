#include<bits/stdc++.h>
using namespace std;
int main(){
	//input 
	int N; cin >> N;
	vector<int> V(N);//“®“I”z—ñ‚ÌéŒ¾
	for(int i=0;i<N;++i){
		cin >> V[i];
	}
	vector<int> C(N);
	for(int i=0;i<N;++i){
		cin >> C[i];
	}
	//compute
	int ans = 0;
	for(int i=0;i<N;++i){
		if(V[i] > C[i]){
			ans += V[i] - C[i];
		}
	}
	// output
	cout << ans << endl;
	}		
	