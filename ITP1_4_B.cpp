#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double r,PI;
	PI = 3.141592653589;
	cin >> r;
	printf("%.6f %.6f",PI*r*r,2*PI*r);
	return 0;
}