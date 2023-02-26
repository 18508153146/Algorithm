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
	int n;
	cin >> n;
	vector<int> a(5*n);
	for(auto &e : a) cin >> e;
	double ans = 0;
	/* c++20
	ranges::sort(a);
	for(int i : a | ranges::views::drop(n) | ranges::views::take(3*n))
		ans += i;
	ans /= 3*n;
	*/
	sort(a.begin(), a.end());
	a.resize(4*n);
	reverse(a.begin(), a.end());
	a.resize(3*n);
	ans = accumulate(a.begin(), a.end(), 0);
	ans /= 3*n;
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}