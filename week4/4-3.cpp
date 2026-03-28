#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main(void) {

	int a, b;

	cout << "변수를 입력하세요: ";
	cin >> a >> b;

	for (int i = 1; i <= 1000; i++) {
		cout << setw(a) << i << setw(b) << i * i << endl;
	}

	return 0;
}