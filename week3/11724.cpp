#include <bits/stdc++.h>
using namespace std;

// 연결 리스트로 그래프 표현
vector <int> v[1001];
bool chk[1001];			

void bfs(int start) {
	queue <int> q;
	q.push(start);
	chk[start] = true;

	while(!q.empty()) {
		int x = q.front();
		q.pop();

		for(int i=0; i<v[x].size(); i++) {
			int next = v[x][i];
			if(!chk[next]) {
				q.push(next);
				chk[next] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	// 정점 개수, 간선 개수
	int n, m;
	cin >> n >> m;


	for(int i=0; i<m; i++) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int total = 0;
	for (int i=1; i<n+1; i++) {
		if (!chk[i]) {
			bfs(i);
			total += 1;
		}
	}
	cout << total << "\n";
}