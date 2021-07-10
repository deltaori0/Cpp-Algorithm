#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, ans;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	cin >> n;
	vector<int> nonmun(n);

	for(int i = 0; i < n; i++)
	{
		cin >> nonmun[i];
	}

	sort(nonmun.begin(), nonmun.end());

	int num;
	for (int k = n; k >= 0; k--)
	{
		num = n - (lower_bound(nonmun.begin(), nonmun.end(), k) - nonmun.begin());
		if (num >= k)
		{
			cout << k << "\n";
			return 0;
		}
	}
}