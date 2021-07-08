#include <iostream>
#include <set>
using namespace std;

// 원소의 삽입과 삭제, 탐색 등의 연산은 O(logN) 보장

int main()
{
	// int 자료형을 저장하는 균형 잡힌 이진 트리 생성
	set<int> s;

	// 원소(5) 삽입
	s.insert(5);

	// 6 값을 가지는 원소를 찾음 - 있다면 해당 원소의 주소값, 없다면 s.end() 리턴
	if (s.find(5) != s.end())
		printf("존재합니다.\n");
	else
		printf("없습니다.\n");

	// 저장된 원소의 수를 리턴
	cout << s.size() << "\n";

	// 모든 원소 삭제
	s.clear();

	// 해당 주소의 원소 삭제
	s.erase(++s.begin()); // 두 번째 원소 삭제

	return 0;
}