#include "std_lib_facilities.h"


using namespace std;





int main(){
	cout << "Please enter a real number!" << endl;


	//double num;
	int num;
	cin >> num;


	cout << "This number is " << num << endl
		 << "n + 1 = " << num+1 << endl
		 << "n * 3 = " << num*3 << endl
		 << "n + n = " << num+num << endl
		 << "n / 2 = " << (double) num/2 << endl
		 << "sqrt(n) = " << sqrt(num) << endl; 

	return 0;
}