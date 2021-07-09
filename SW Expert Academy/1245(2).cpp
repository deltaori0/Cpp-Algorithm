#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int t, n;
double x[10], m[10];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed;
	cout.precision(10);

	freopen("input.txt", "r", stdin);

	cin >> t;
	for (int tc = 1; tc <= t; ++tc)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> x[i];
		for (int i = 0; i < n; i++)
			cin >> m[i];
		cout << "#" << tc << " ";

		for (int i = 0; i < n-1; i++)
		{
			double l = x[i], r = x[i+1], ans = 0;
			for (int k = 0; k < 100; ++k)
			{
				double mid = (l + r) / 2;
				double sum = 0;
				for (int j = 0; j <= i; ++j)
					sum += m[j] / pow(mid - x[j], 2);
				for (int j = i+1; j < n; ++j)
					sum -= m[j] / pow(mid - x[j], 2);

				if (sum > 0)
				{
					// 왼쪽이 더 힘이 세다는 뜻 -> 오른쪽으로 움직이기
					l = mid;
				}
				else
				{
					ans = mid;
					r = mid;
				}
			}
			cout << ans << " ";
		}
		cout << "\n";
	}

	return 0;
}