#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);

	vector <int> w, k;
	int score;
	int w_score = 0, k_score = 0;

	for(int i = 0; i < 10; i++){
		scanf("%d", &score);
		w.push_back(score);
	}

	for(int i = 0; i < 10; i++){
		scanf("%d", &score);
		k.push_back(score);
	}

	sort(w.begin(), w.end());
	sort(k.begin(), k.end());



	for(int i = 0; i < 3; i++) {
		w_score += w.back();
		k_score += k.back();
		w.pop_back();
		k.pop_back();
	}

	printf("%d %d", w_score, k_score);
}