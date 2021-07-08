#include <bits/stdc++.h>
using namespace std;

int arr[1000000], tmp[1000000];

void mergesort(int start, int end) {
	if(start == end) return;
	int mid = (start + end) / 2;

	mergesort(start, mid);
	mergesort(mid+1, end);

	for(int i=start; i<=end; i++) tmp[i] = arr[i];

	int i = start, j = mid+1;
	int cur_idx = start;

	while (i <= mid && j <= end) {
		if(tmp[i] < tmp[j]) {
			arr[cur_idx] = tmp[i];
			i++;
		} else{
			arr[cur_idx] = tmp[j];
			j++;
		}
		cur_idx++;
	}

	// 다 끝났는데도 불구하고 idx가 mid 안 넘었으면 아직 안 들어갔다는 뜻
	while(i <= mid) {
		arr[cur_idx] = tmp[i];
		cur_idx++;
		i++;
	}

	while(j <= end) {
		arr[cur_idx] = tmp[j];
		cur_idx++;
		j++;
	}


}

int main() {
	// freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	mergesort(0, n-1);	// start idx, end idx
	
	for (int i=0; i<n;i++) printf("%d\n", arr[i]);
	return 0;
}