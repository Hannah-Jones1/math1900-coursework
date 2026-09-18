
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	cout << rand() % 10 + 1 << "\t" << rand() % 10 + 1 << "\t" << rand() % 10 + 1 << "\t" << rand() % 10 + 1 << "\t" << rand() % 10 + 1 << "\t" << endl;
}

