#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int x;
	priority_queue<int, vector<int>, greater<int> > pq;
	for (int i=0; i<n; i++) {
		cin >> x;
		if (x==0){
			if (pq.size() == 0) {
				cout << 0 << "\n";
			} else{
				int temp = pq.top();
				pq.pop();
				cout << temp << "\n";
			}
		} else {
			pq.push(x);
		}
	}

}