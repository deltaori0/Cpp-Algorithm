#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);

	vector < pair<int, int> > v(8);

	for (int i=0; i<8; i++) {
		cin >> v[i].first;
		v[i].second = i+1;
	}

	// 내림차순
	sort(v.begin(), v.end(), greater< pair<int, int> >());

	int total = 0;
	vector <int> score;

	for (int i=0; i<5; i++) {
		score.push_back(v[i].second);
		total += v[i].first;
	}
	
	cout << total << "\n";

	sort(score.begin(), score.end());

	for (int i=0; i<5; i++) {
		cout << score[i] << " ";
	}
	cout << "\n";

}