#include <iostream>

using namespace std;



int area(int l, int w){
	return l*w;
}

int main(){



	int x = 2, y = 4;

	int a = area(x,y);
	cout << "Area: " << a << endl;

	int a2 = area(3,6);
	cout << "Area2: " << a2 << endl;

	return 0;
}