#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int k, n;
	cin >> k;

	stack <int> s;

	for (int i=0; i<k; i++) {
		cin >> n;
		if (n == 0)
			s.pop();
		else
			s.push(n);
	}

	int total = 0;
	while(!s.empty()){
		total += s.top();
		s.pop();
	}

	cout << total;
}