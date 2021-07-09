#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed;
	cout.precision(10);

	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		int x, m;
		
		cin >> n;

		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			v[i].first = x;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			v[i].second = m;
		}

		cout << "#" << test_case << " ";

		double left, right, mid, ans;
		for (int i = 0; i < n-1; i++)
		{
			left = v[i].first, right = v[i+1].first, ans = 0;
			for (int j = 0; j < 100; j++)
			{
				mid = (left + right) / 2;
				double sum = 0;
				for (int k = 0; k <= i; k++)
				{
					sum += v[k].second / pow(mid - v[k].first, 2);
				}
				for (int k = i+1; k < n; k++)
				{
					sum -= v[k].second / pow(mid - v[k].first, 2);
				}

				if (sum > 0)
				{
					left = mid;
				}
				else
				{
					ans = mid;
					right = mid;
				}
			}
			cout << ans << " ";
		}
		cout << "\n";
	}

	return 0;
}