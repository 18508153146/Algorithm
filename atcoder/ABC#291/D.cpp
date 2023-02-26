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
	constexpr int mod = 998244353;
	int n;
	cin >> n;
	if(n == 1) {
		cout << "2\n";
		return 0;
	}
	vector<int> a(n), b(n);
	for(int i=0;i<n;i++)
		cin >> a[i] >> b[i];
	int px, py, cx, cy;
	px = py = 1;
	cx = cy = 0;
	for(int i=1;i<n;i++) {
		if(a[i] != a[i-1])
			(cx += px) %= mod;
		if(a[i] != b[i-1])
			(cx += py) %= mod;
		if(b[i] != a[i-1])
			(cy += px) %= mod;
		if(b[i] != b[i-1])
			(cy += py) %= mod;
		px = cx, py = cy, cx = 0, cy = 0;
	}
	int ans = (px + py) % mod;
	cout << ans;
	return 0;
}