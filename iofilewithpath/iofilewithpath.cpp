#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baring;
	string NamaFile;

	cout << "Masukkan Nama File : ";
	cin >> NamaFile;

	ofstream outfile;
	outfile.open(NamaFile + ".txt", ios::out);

	
}