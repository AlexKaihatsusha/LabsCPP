#include <iostream>
#include "Header.h"
using std::cout;
using std::cin;
using std::endl;




int main() {
	Square square;
	unsigned int s;
	cout << "Enter square side: " << endl;
	cin>>s;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(3767,'\n');
	}
	square.set_side(s);
	cout << "Area is: " << square.GetArea() << endl;
	square.DrawSquare();
	


	return 0;
}