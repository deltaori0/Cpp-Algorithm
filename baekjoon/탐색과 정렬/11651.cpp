#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n;
	cin >> n;
	vector<pair<int, int> > v;
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}