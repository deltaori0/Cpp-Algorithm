#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	// freopen("input.txt", "r", stdin);

	int n;
	vector< pair<int, int> > v;
	int x, y;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		scanf("%d", &y);

		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), comp);

	for(int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
}