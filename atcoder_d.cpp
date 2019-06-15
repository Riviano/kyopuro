#include<iostream>
using namespace std;
int main(){
	int n,min,count,i;
	long long a[100000];
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i==0) min = a[i];
		else if(a[i]<0){
			if(a[i]*(-1) < min){
				 min = a[i];
				 count =i;
			}
		}
		else if(a[i]>=0){
			if(a[i]<min){
				 min = a[i];
				count =i;	
			}
		}
	}
	for(int i=0;i<count;i++){
		if(a[i]<0){
			a[i] = a[i] * (-1);
			a[i+1] = a[i+1] * (-1);
		}			
	}
	for(i = n-1;i>count;i--){
		if(a[i]<0){
			a[i] = a[i] * (-1);
			a[i-1] = a[i-1] * (-1);
		}
	}
	int sum = 0;
	for(i=0;i<n;i++){
	sum = sum + a[i];
	}
	return 0;
}