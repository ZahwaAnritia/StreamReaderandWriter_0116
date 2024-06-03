#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch(int a) {
		cout << "Pengecualian akan diexsekusi" << endl;
	}
	catch (...) {
		cout << "default Pengecualian diexsekusi" << endl;
	}
}