#include <bits/stdc++.h>
using namespace std;

bool is_anagram(char * a, char * b) {
	vector<int> alphabets(26);

	if ((int)strlen(a) != (int)strlen(b))
		return false;

	int len = (int)strlen(a);
	for(int i=0; i<len; i++){
		alphabets[a[i] - 97]++;
		alphabets[b[i] - 97]--;
	}

	for(int i=0; i<26; i++){
		if(alphabets[i] != 0)
			return false;
	}
	return true;
}

int main() {
	// freopen("input.txt", "r", stdin);

	int n;
	char a[100], b[100];

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s %s", a, b);

		if(is_anagram(a, b))
			printf("%s & %s are anagrams.\n", a, b);
		else
			printf("%s & %s are NOT anagrams.\n", a, b);
	}
}