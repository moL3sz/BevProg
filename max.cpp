#include <iostream>


using namespace std;


int main(){



	int a = 0, b = 0;
	cout << "Please enter two integer values (a,b): ";
	cin >> a >> b;
	int m = (a > b) ? a : b;
	cout << "Maximum of two: 	" << m << endl;


	return 0;
}