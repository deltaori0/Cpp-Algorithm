#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct country
{
	int num;
	int gold;
	int silver;
	int bronze;
};

bool comp(country a, country b)
{
	if (a.gold > b.gold)
		return true;
	else if (a.gold == b.gold)
	{
		if (a.silver > b.silver)
			return true;
		else if (a.silver == b.silver)
		{
			if (a.bronze > b.bronze)
				return true;
		}
	}

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n, k;
	int n1, n2, n3, n4;
	int result = 0, val = 0;

	country arr[1001];

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> n1 >> n2 >> n3 >> n4;
		arr[i].num = n1;
		arr[i].gold = n2;
		arr[i].silver = n3;
		arr[i].bronze = n4;
	}

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++)
	{
		// cout << arr[i].num << arr[i].gold << arr[i].silver << arr[i].bronze << "\n";
		if (arr[i].num == k)
		{
			result = i;
			break;
		}
	}
	// cout << "result : " << result << "\n";

	for (int i = result-1;;i--)
	{
		if (arr[i].gold == arr[result].gold && arr[i].silver == arr[result].silver && arr[i].bronze == arr[result].bronze)
		{
			// 같은 등수인 나라 개수 세주기 (자기보다 앞에 위치하는)
			val++;
		}
		else
			break;
	}
	// cout << "val : " << val << "\n";

	cout << result - val + 1<< "\n";

}