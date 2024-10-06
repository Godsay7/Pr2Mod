#include <iostream>
using namespace std;
//Task 2

int main() {
	int A[4][4]{
		{-9, -3, 8, 17},
		{-7, 5, 4, -1},
		{14, 1, -6, -2},
		{-11, 3, 0, 12} };
	int min;
	min = A[0][0];
	int indexm = 0;
	int indexn = 0;
	for (int m = 0; m < 4; m++) {
		for (int n = 0; n < 4; n++) {
			if (A[m][n] < min) {
				min = A[m][n];
				indexm = m;
				indexn = n;
			}
		}
	}
	cout << "Index of mininal number is: m = " << indexm << ", n = " << indexn;
	return 0;
}