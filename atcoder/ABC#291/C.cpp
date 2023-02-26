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
	set<pair<int,int>> points;
	int x = 0, y = 0;
	map<char,pair<int,int>> shift {
		{'R', {1, 0}},
		{'L', {-1, 0}},
		{'U', {0,1}},
		{'D', {0, -1}}
	};
	points.insert({0,0});
	for(int i=0;i<n;i++) {
		char c;
		cin >> c;
		x += shift[c].first;
		y += shift[c].second;
		points.insert({x,y});
	}
	if(points.size() == n+1)
		cout << "No\n";
	else
		cout << "Yes\n";
	return 0;
}