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
	int n, m;
	cin >> n >> m;
	vector<int> ind(n),ans(n);
	vector<vector<int>> g(n);
	for(int i=1;i<=m;i++) {
		int x,y;
		cin >> x >> y;
		x--,y--;
		g[x].push_back(y);
		ind[y]++;
	}
	queue<int> q;
	for(int i=0;i<n;i++)
		if(ind[i] == 0)
			q.push(i);
	int val = 1;
	while(q.size()) {
		if(q.size() != 1) {
			cout << "No\n";
			return 0;
		}
		ans[q.front()] = val++;
		for(auto v : g[q.front()])
			if(--ind[v] == 0)
				q.push(v);
		q.pop();
	}
	cout << "Yes\n";
	for(auto e : ans)
		cout << e << ' ';
	return 0;
}