#include<iostream>
using namespace std;
int main(){
	int vi[20],ci[20],n,i;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> vi[i];
	}
	for(i=0;i<n;i++){
		cin >> ci[i];
	}
	i=0;
	int sum = 0;
	while(i<n){
		if(vi[i]-ci[i]>0) sum=sum+(vi[i]-ci[i]);
		i++;
	}		
	cout << sum;
	return 0;
}