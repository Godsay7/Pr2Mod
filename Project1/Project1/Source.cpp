#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main() {
	int height = 3; //the height of the first level
	int n; // number of layers
	cout << "Add the number of layers: ";
	cin >> n;

	// function to write a file
	ofstream outfile("christmas_tree.txt");
	if (!outfile.is_open()) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	//colours
	string green = "\033[32m";
	string brown = "\033[2;33m";
	string red = "\033[31m";
	string blue = "\033[34m";
	string yellow = "\033[33m";
	string reset = "\033[0m";
	// toys
	char toys[4]{ '@', '$' ,'%', '#' };
	string colour[3]{ red, yellow, blue };

	for (int y = 1; y <= n; y++) {
		if (y != 1) {
		height++;
		}
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= (n - y) + (height - i); j++) {
				cout << reset <<" ";
				outfile << " "; 
			}
			for (int j = 1; j <= 2 * i - 1; j++) {
				int randomValue = rand() % 100;
				if (randomValue < 70) {
					cout << green << "*";
					outfile << "*";
				}
				else {
					char randomToys = toys[rand() % 4];
					string randomColour = colour[rand() % 3];
					cout << randomColour << randomToys;
					outfile << randomToys;
				}
			}
		cout << endl;
		outfile << endl;
		}
	}

	// stem
	int stem = n + 1;   // n = 4, stem = 5
	int arr[2][50];
	// { .. , .. , .. etc }
	// { .. , .. , .. etc }
	for (int i = 0; i != stem; i++) {
		if (arr[1][i]) {
			cout << reset << " ";
			outfile << " ";
		}
	}
	if (arr[1][stem]) {
		cout << brown << "*" << endl;
		outfile << "*" << endl;
	}
	for (int i = 0; i != stem; i++) {
		if (arr[2][i]) {
			cout << reset << " ";
			outfile << " ";
		}
	}
	if (arr[2][stem]) {
		cout << brown << "*" << endl;
		outfile << "*" << endl;
	}

	outfile.close();
	cout << reset;
	return 0;
}