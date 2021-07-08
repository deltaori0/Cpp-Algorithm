#include <iostream>
using namespace std;

#define MAX_SIZE 10

/*
힙 정렬(Heap Sort)

- 내림차순 정렬 : 최대힙 구성
- 오름차순 정렬 : 최소힙 구성

1. 정렬되지 않은 배열 -> 최소힙/최대힙 구성
2. root를 마지막 노드와 교체
3. 반복

[힙 만들기]
- 완전 이진 트리 형성
- 인덱스 0부터 시작한다고 치면
- 현재 노드 인덱스 : current
- 부모 노드 인덱스 : current / 2 - 1
- 자식 노드 인덱스 : current * 2 + 1, current * 2 + 2

힙 트리 구성
1) 주어진 데이터로 구성된 배열을 받아와 중간 지점 선택
2) 중간 인덱스부터 제일 앞 인덱스까지 heapify 하며 트리를 재구성
- heapify는 특정 노드를 중심으로 그 밑 트리들이 힙의 성질 만족하게 만드는 작업
- 중간 노드부터 루트 노드로 heapify 하는 이유는 : 항상 중간 노드부터 자식이 존재하기 때문
*/

void MakeHeap(int arr[])
{
	// 중간 노드 선택 
	int mid = MAX_SIZE / 2 - 1;

	// 루트 노드까지 반복
	for(mid; mid >= 0; mid--)
	{
		heapify(arr, )
	}
}

void HeapSort(int arr[])
{
	MakeHeap(arr)
}


int main()
{
	int arr[MAX_SIZE] = {5,9,1,8,2,4,3,10,7,6};

	HeapSort(arr);

	for(int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}