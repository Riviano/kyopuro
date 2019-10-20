#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(5);
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	vector<int> s = { 0, 1, 2, 3, 4 };
	int fans= 999999;
	do {
		int ans = 0;
		for (int i = 0; i < 5; ++i) {
			while (ans % 10 != 0) ans += 1;
			ans += a[s[i]];
		}
		fans= min(fans, ans);
	} while (next_permutation(s.begin(), s.end()));
	cout << fans<< endl;
	return 0;
}
