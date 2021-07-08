#include <iostream>
using namespace std;

# define MAX_SIZE 10

/*
병합 정렬(Merge Sort)

- 분할 정복 알고리즘 중 하나

1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 본다
2. 정렬된 리스트가 아니면 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눈다
3. 각 부분 리스트를 재귀적으로 합병 정렬을 이용해 정렬
4. 두 부분 리스트를 다시 하나의 정렬된 리스트로 합병

- 합병 정렬에서 실제로 정렬이 이루어지는 시점은 2개의 리스트를 합병(merge) 하는 단계
- 합병 정렬에서는 추가적인 리스트가 필요하다
- O(NlogN)

1. 분할(Divide) : 입력 배열을 같은 크기의 2개의 부분 배열로 분할
2. 정복(Conquer) : 부분 배열을 정렬한다. 부분 배열의 크기가 충분히 작지 않으면 순환 호출을 이용하여 다시 분할 정복 방법 적용
3. 결합(Combine) : 정렬된 부분 배열들을 하나의 배열에 합병

정렬은 각 요소의 첫 번쨰 원소끼리의 비교로 이루어진다
- 같은 크기의 리스트니까 각 리스트마다 인덱스 표시할 i, j를 둔다
- 더 작은 크기의 원소를 뽑고 인덱스 이동
- 어느 한 쪽이 배열 범위를 넘어가면 멈추고 남은 원소를 뒤에 집어넣는다 (이미 정렬되어 있으므로)
*/

void merge(int arr[], int left, int mid, int right)
{
	static int sorted_arr[MAX_SIZE];

	int i, j, k;

	i = left;	// 왼쪽 부분 리스트 인덱스
	j = mid+1;	// 오른쪽 부분 리스트 인덱스
	k = left;	// 새로운 리스트의 인덱스

	while(i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			sorted_arr[k] = arr[i];	// 더 작은 값을 넣는다
			i++;
		}
		else
		{
			sorted_arr[k] = arr[j];
			j++;
		}
		k++;
	}

	if (i > mid)
	{
		for (int t = j; t <= right; t++)
		{
			sorted_arr[k] = arr[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= mid; t++)
		{
			sorted_arr[k] = arr[t];
			k++;
		}
	}

	// 임시 배열을 arr로 재복사
	for (int t = left; t <= right; t++)
	{
		arr[t] = sorted_arr[t];
	}
}

void MergeSort(int arr[], int left, int right)
{
	int mid;

	if(left >= right)
		return;

	mid = (left + right) / 2;	// 리스트 균등 분할 (Divide)
	MergeSort(arr, left, mid);	// 앞 부분 리스트 정렬 (Conquer)
	MergeSort(arr, mid+1, right);	// 뒷 부분 리스트 정렬 (Conquer)
	merge(arr, left, mid, right);	// 정렬된 2개의 부분 배열을 합병 (Combine) - 이때 정렬된 리스트라는 것은 길이가 1인 리스트
}

int main()
{
	int arr[MAX_SIZE] = {5,9,1,8,2,4,3,10,7,6};

	MergeSort(arr, 0, MAX_SIZE-1);

	for(int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << "\n";
	}
}