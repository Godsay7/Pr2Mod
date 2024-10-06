#include <iostream>
using namespace std;
//Task3

int main() {
	int A[4][4]{
		{9, -3, 8, 17},
		{-7, 5, 4, -1},
		{14, 1, -6, -2},
		{-11, 3, 0, 12} };
	int min;
	int num = -A[0][0];
	if (A[0][0] > 0) {
		A[0][0] = num;
	}
	min = A[0][0];
	for (int m = 0; m < 4; m++) {
		for (int n = 0; n < 4; n++) {
			if (A[m][n] < 0 && A[m][n] > min) {
				min = A[m][n];
			}
		}
	}
	cout << "maximum negative value: " << min;
	return 0;
}