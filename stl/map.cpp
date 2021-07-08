#include <iostream>
#include <map>
using namespace std;

// 딕셔너리 자료구조
// 원소 삽입과 삭제, 탐색 등의 연산은 O(logN)을 보장

int main()
{
	// int 자료형을 key로, int 자료형을 data로 저장하는 딕셔너리 자료구조 생성
	map<int, int> m;

	// (4, 5) 원소 삽입
	m.insert(make_pair(4, 5));

	// 또는
	m[4] = 5;

	// key와 연관된 원소를 pair<키 자료형, 데이터 자료형> 형태로 리턴함
	m.find(4).second;

	// key와 연관된 원소의 개수를 리턴함
	m.count(4);

	// 저장된 원소의 수를 리턴함
	m.size();

	// 모든 원소 삭제
	m.clear();

	// 해당 주소의 원소 삭제
	m.erase(++m.begin()); // 두 번째 원소 삭제

	return 0;
}