#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);

	int n;
	cin >> n;

	int max = 0, min = 100, gap = 0;

	vector <pair <pair<int, int>, pair<int, string> > > students(n);
 
	for (int i = 0; i < n; i++) {
		cin >> students[i].second.second >> students[i].second.first >> students[i].first.second >> students[i].first.first;
	}

	sort(students.begin(), students.end());

	cout << students[n-1].second.second << "\n" << students[0].second.second << "\n";

	return 0;


}