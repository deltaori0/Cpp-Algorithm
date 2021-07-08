#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("input.txt", "r", stdin);

	string n;
	cin >> n;
	sort(n.begin(), n.end(), greater<char>());
	cout << n;



	return 0;
}