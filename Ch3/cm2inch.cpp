#include "std_lib_facilities.h"


using namespace std;
int main(){

	double inch = 2.54;
	int len = 1;
	while(len != 0){
		cout << "Please enter a distance in inches: ";
		cin >> len;

		cout << "length in inches: " << len*inch<<endl;
	}
	return 0;
}