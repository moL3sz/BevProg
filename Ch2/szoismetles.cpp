#include "std_lib_facilities.h"


using namespace std;
int main(){
	string prev="",current = "";


	while(cin >> current){
		if(prev == current){
			cout << prev << endl;;
		}
		prev = current;
	}


	return 0;
}
