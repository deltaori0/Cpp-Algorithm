#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

#define st pair<pair<string, int>, pair<int, int> >

bool comp(st p1, st p2)
{
	int y1, y2, m1, m2, d1, d2;
	y1 = p1.second.second, y2 = p2.second.second;
	m1 = p1.second.first, m2 = p2.second.first;
	d1 = p1.first.second, d2 = p2.first.second;


	if (y1 == y2)
	{
		if (m1 == m2)
			return d1 < d2;
		else
			return m1 < m2;
	}
	else
		return y1 < y2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n;
	cin >> n;

	vector<pair<pair<string, int>, pair<int, int> > > students(n);

	for (int i = 0; i < n; i++)
	{
		cin >> students[i].first.first >> students[i].first.second >> students[i].second.first >> students[i].second.second;
	}

	sort(students.begin(), students.end(), comp);

	cout << students.back().first.first << "\n";
	cout << students.front().first.first << "\n";
}