#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);

	int n, temp;
	int arr[1000];
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(int j=1; j<n; j++){
		for(int i=0; i<n-1;i++){
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	for(int i=0; i<n;i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}