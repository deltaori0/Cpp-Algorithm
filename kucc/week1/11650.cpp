#include <bits/stdc++.h>
using namespace std;

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

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
}