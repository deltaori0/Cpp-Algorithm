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

	vector <pair <int, int> > problems(8);	// (점수, 문제 번호)
	for (int i = 0; i < 8; i++)
	{
		problems[i].second = i+1;
		cin >> problems[i].first;
	}

	// pair는 first 값이 같으면 second 값으로 오름차순이 default
	sort(problems.begin(), problems.end(), greater<>());	// 내림차순

	vector<int> v(5);
	int total = 0;

	for (int i = 0; i <5; i++)
	{
		v[i] = problems[i].second;
		total += problems[i].first;
	}

	cout << total << "\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
}