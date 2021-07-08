#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);

	int k;
	scanf("%d", &k);

	for(int i = 0; i < k; i++) {
		int n;
		scanf("%d", &n);
		vector <int> scores(n);
		for(int j=0; j<n; j++) scanf("%d", &scores[j]);
		sort(scores.begin(), scores.end());

		int largest_gap = 0;
		for(int j=1; j<n; j++) {
			if (scores[j] - scores[j-1] > largest_gap)
				largest_gap = scores[j] - scores[j-1];
		}
		int min = scores.front();
		int max = scores.back();

		printf("Class %d\n", i+1);
		printf("Max %d, Min %d, Largest gap %d\n", max, min, largest_gap);		
	}

}