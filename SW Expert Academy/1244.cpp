#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int ans, max_change;
string s;

void dfs(int index, int cur_change)
{
	if (cur_change == max_change)
	{
		ans = max(ans, stoi(s));
		return;
	}

	for (int i = index; i < s.length(); i++)
	{
		for (int j = i+1; j < s.length(); j++)
		{
			swap(s[i], s[j]);
			dfs(i, cur_change+1);
			swap(s[i], s[j]);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int t;
	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		cin >> s >> max_change;
		ans = 0;

		// 최소 문자열 길이만큼만 바꿔도 최댓값 만들 수 있음
		if (max_change > s.length())
			max_change = s.length();

		dfs(0, 0);

		cout << "#" << tc << " " << ans << "\n";
	}

	return 0;
}