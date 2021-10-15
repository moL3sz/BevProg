#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int main(){

	/*
	* Tasks: 1-5
	double a,b;
	while(cin >> a >> b){
		cout << "a: "<< a  << "\t" <<"b: " <<b << endl;
		if (a == b){
			cout << "numbers are equal!" << endl;
			continue;
		}
		cout << "the smaller value is: " << ((a < b) ? a : b)<<endl
			 << "the larger value is: " << ((a > b) ? a : b)<<endl;	
		if (abs(a-b) <= double(1)/100){
			cout << "Numbers are almost equal" << endl;
		}
	}
	*/

	//Task 6-11
	double a,largest = 0,smallest = INT_MAX;
	string unit ="";
	double sum = 0;
	map<string, double> units_convert = {
		{"cm",1.0/100.0},
		{"m",1},
		{"in",2.54/100},
		{"ft",2.54*12/100} // 12in to cm
						   // cm to m
	};
	vector<double> numbers;
	while (cin >> a >> unit){
		//O(1) lookup	
		if(!units_convert.contains(unit)){
			cerr << "Unknown unit entered!!" << endl;
			continue;
		}


		//convert all to m
		double converted = units_convert[unit]*a;
		numbers.push_back(converted);
		sum += converted;
		cout << "The value entered: " << a << endl;
		if(a < smallest){
			cout << "the smallest so far " << endl;
			smallest = a;
		}
		if(a > largest){
			cout << "the largest so far" << endl;
			largest = a;
		}
	}
	//output
	cout << "Smallest number: " << smallest << endl
		 << "Largest number: " << largest << endl
		 << "Sum of the numbers (m): " << sum << endl << endl;
	//sort the numbes

	cout << "Numbers: " << endl;
	sort(numbers.begin(),numbers.end());
	for(double num : numbers){
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
