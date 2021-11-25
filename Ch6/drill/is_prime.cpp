#include <iostream>

using namespace std;


bool is_prime(int n){
	if(n <= 1)
		return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	cout << "Ez a kis program eldönti hogy egy szám prím-e?" << endl;
	cout << "Adjon meg egy számot: ";
	int n;
	cin >> n;
	cout << (is_prime(n) ? "true" : "false") << endl;

}

