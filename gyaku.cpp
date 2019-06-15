#include<iostream>
#include<vector>
using namespace std;
int main(){
	int i,j;//i行j列の行列の把握
	int k,s;//ループのための変数	
	cin >> i >> j;
	vector<vector<int>> A(i,vector<int>(j));
	vector<vector<int>> E(i,vector<int>(j));
	for(int k=0;k<i;k++){
		for( s = 0;s<j;s++){
			cin >> A[k][s];
			if(k == s){
				 E[k][s] = 1;
			}
			else{
				 E[k][s] = 0;
			}
		}
	}
	
	for( k=0;k<i;k++){
		for( s = 0;s<j;s++){
			cout << A[k][s] << " ";
		}
		cout << endl;
	}
	for( k=0;k<i;k++){
		for( s = 0;s<j;s++){
			cout << E[k][s] << " ";
		}
		cout << endl;
	}
	A.pop_back();
	return 0;
}