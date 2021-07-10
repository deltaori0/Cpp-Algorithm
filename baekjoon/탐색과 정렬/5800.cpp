#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int k;
	int n;
	int min, max, largest_gap;
	cin >> k;

	for (int i = 1; i <= k; i++)
	{
		cout << "Class " << i << "\n";
		cin >> n;

		vector<int> scores(n);
		for (int j = 0; j < n; j++)
		{
			cin >> scores[j];
		}

		sort(scores.begin(), scores.end());

		max = scores[n-1]; // scores.back()
		min = scores[0];	// scores.front()

		largest_gap = 0;
		for (int j = 0; j < n-1; j++)
		{
			int temp = scores[j+1] - scores[j];
			if (temp > largest_gap)
			{
				largest_gap = temp;
			}
		}

		cout << "Max " << max << ", Min " << min << ", Largest gap " << largest_gap << "\n";

	}
}