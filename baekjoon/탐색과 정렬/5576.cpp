#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	vector<int> w_score(10);
	vector<int> k_score(10);

	for(int i = 0; i < 10; i++)
	{
		cin >> w_score[i];
	}

	for(int i = 0; i < 10; i++)
	{
		cin >> k_score[i];
	}

	sort(w_score.begin(), w_score.end(), greater<>());
	sort(k_score.begin(), k_score.end(), greater<>());

	int w_sum = 0, k_sum = 0;

	for(int i = 0; i < 3; i++)
	{
		w_sum += w_score[i];
		k_sum += k_score[i];
	}

	cout << w_sum << " " << k_sum << "\n";
}