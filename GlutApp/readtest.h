#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void readtest() {
	fstream reader;
	string word;
	int count = 0;
	char** grid;
	
	reader.open("includes/map.txt", ios::in);
	
	
	if (reader) {
		grid = new char*[5];
		for (int i = 0; i < 5; i++) {
			grid[i] = new char[5];
			for (int j = 0; j < 5; j++) {
				reader >> word;
				cout << word << endl;
				grid[i][j] = word[0];
				cout << grid[i][j] << endl;
				cout << "-----" << endl;
				count++;
			}
		}
	}
	
	cout << count << endl;
	
	for (int i = 0; i < 5; i++) {
			delete[] grid[i];
		} 
	delete[] grid;
	reader.close();
}