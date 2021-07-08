#include <bits/stdc++.h>
using namespace std;

int n;
// a[row] = 퀸이 위치하는 column
int a[15];
int answer;

bool is_possible(int level){
	// 퀸 체크 - 같은 열, 같은 행, 같은 대각선에 놓이면 안 됨
	// 같은 행은 어차피 지금 level에 따라 해주고 있기 때문에 괜찮고
	for(int j=0; j<level; j++){
		if(a[level] == a[j] || abs(a[level]-a[j]) == (level-j))
			return false;
	}

	return true;
}

void dfs(int level){
	if (level == n)
		answer += 1;
	else{
		for(int i=0; i<n; i++){
			a[level] = i;
			if(is_possible(level))
				dfs(level+1);
		}
	}
}

int main() {
	// freopen("input.txt", "r", stdin);
	cin >> n;

	for(int i=0;i<15;i++){
		a[i]=-1;
	}

	dfs(0);

	cout << answer;

}