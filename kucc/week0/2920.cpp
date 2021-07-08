#include <bits/stdc++.h>
using namespace std;

enum {ASC, DSC, MIX};

int main() {
	// 주석 처리하기
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int arr[8];
	int result;
	

	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}


	if (arr[0] == 1) result = ASC;
	else if (arr[0] == 8) result = DSC;
	else result = MIX;

	for (int i = 1; i < 8; i++) {
		if (arr[i] - arr[i-1] == 1 && result == ASC) continue;
		if (arr[i] - arr[i-1] == -1 && result == DSC) continue;
		result = MIX;
		break;
	}

	if (result == ASC) printf("ascending");
	else if (result == DSC) printf("descending");
	else printf("mixed");
}