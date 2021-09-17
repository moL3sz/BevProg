#include "std_lib_facilities.h"


using namespace std;
int main(){
	cout << "Please enter your firstname, lastname and your age"<<endl;


	int age;
	string firstName, lastName;
	cin >> firstName >> lastName >> age;
	string name = firstName + ' ' + lastName;
	++age;
	cout << "Hello, " << name << "! " << "(" << age << ")" << endl;

	return 0;





}