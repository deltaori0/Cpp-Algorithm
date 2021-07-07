#include <iostream>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int number;
	cin >> number;
	if (number % 2 == 0) {
		cout << "짝수!" << "\n";
	} else {
		cout << "홀수!" << "\n";
	}

	return 0;
}