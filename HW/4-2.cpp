#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main(void) {

	for (int i = 1; i <= 100; i++) {
		cout << setw(6) << i << setw(10) << i * i << endl;
	}

	return 0;
}