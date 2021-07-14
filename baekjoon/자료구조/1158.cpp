#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n, k;
	queue<int> q;

	cin >> n >> k;

	vector<int> ans;
	int temp, cnt = 1;

	for (int i = 1; i <= n; i++)
		q.push(i);

	while(!q.empty())
	{
		temp = q.front();
		q.pop();

		if (cnt == k)
		{
			ans.push_back(temp);
			cnt = 0;
		}
		else
		{
			q.push(temp);
		}

		cnt++;
	}

	cout << "<";
	for (int i = 0; i < n-1; i++)
	{
		cout << ans[i] << ", ";
	}
	cout << ans[n-1] << ">";


}