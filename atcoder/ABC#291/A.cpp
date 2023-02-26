//
// Created by YouMu on 2023-02-26.
//
#include <bits/stdc++.h>
using namespace std;
auto IO = []() {
	cin.tie(nullptr)->sync_with_stdio(false);
	cout.tie(nullptr);
	return 0;
}();
int32_t main() {
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++) {
		if(isupper(s[i])) {
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}