#include <iostream>
#include "asd.h"
using namespace std;


int main(){

	cout << "Adjon meg három számot: ";

	int a,b,c;
	cin >> a >> b >> c;
	cout << "A szorzatuk: " << szorzat(a,b,c) << endl;

	string name;
	cout << "\nAdja meg a nevét: ";
	cin >> name;
	udvozles(name);
}