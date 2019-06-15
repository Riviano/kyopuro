#include<iostream>
using namespace std;
int main(){
	int n,i,num,min,kmax = 1,kakunin=0;
	long long a[100000];
	cin >> n;
	cin >> a[0];
	min = a[0];
	for(int i=1;i<n;i++){
		cin >> a[i];
		if(min>a[i]) min = a[i];
		
	}
	cin >> i >> num;
	if(min>num) min = num;
	a[i-1] = num;
	for(int j=1;j<=min;j++){
		for(i=0;i<n;i++){
			if(a[i]%j==0) kakunin++;
		}
		if(kakunin == n) kmax =j;
	}
	cout << kmax;
	return 0;
}
		