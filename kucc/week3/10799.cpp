#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	stack <char> st;
	string arrangement;

	int total = 0;
	cin >> arrangement;
	for (int i =0; i< arrangement.length(); i++){
		if (arrangement[i] == '(') {
			st.push('(');
		}
		else {
			// razor
			if (arrangement[i-1] == '(') {
				st.pop();
				total += st.size();
			}
			// pipe end
			else {
				st.pop();
				total += 1;
			}
		}
	}

	cout << total << "\n";

}