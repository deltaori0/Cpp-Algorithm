#include <bits/stdc++.h>
using namespace std;

int main() {
	// 주석 처리하기
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	char s[100];
	int alphabets[26];
	fill_n(alphabets, 26, -1);
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		int idx = s[i] - 'a';
		if(alphabets[idx] == -1)
			alphabets[idx] = i;
	}

	int len = sizeof(alphabets) / sizeof(int);

	for (int i = 0; i < len; i++) {
		printf("%d ", alphabets[i]);
	}

}