#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	string num;
	cin >> num;

	sort(num.begin(), num.end(), greater<>());

	cout << num;
}