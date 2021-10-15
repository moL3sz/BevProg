#include <iostream>

using namespace std;

int main(){
	cout << "Enter an expression!\n";


	int lvar = 0, rvar = 0;
	char op = 0;

	int res;

	cin >> lvar >> op >> rvar;

	if(op == '+'){
		res = lvar + rvar;
	}
	else if(op == '-'){
		res = lvar - rvar;
	}
	cout <<"Result: " << res << endl;

	return 0;
}