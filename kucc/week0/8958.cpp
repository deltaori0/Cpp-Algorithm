#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	char quiz[80];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		int score = 0;
		int cnt = 0;

		scanf("%s", quiz);

		for (int j = 0; j < strlen(quiz); j++) {
			if (quiz[j] == 'O') {
				cnt++;
				score += cnt;
			}
			else {
				cnt = 0;
			}
		}
		printf("%d\n", score);
	}

}