#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;


class Point{
	public:
		int x,y;
		Point(int, int);
};
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}
ostream& operator <<(ostream &os, Point &p){
	os << p.x << " " << p.y;
	return os;
}
bool operator!=(Point p1, Point p2){
	return p1.x != p2.x || p1.y != p2.y;
}

int main(){
	cout << "Please enter blow 7 pairs of (x,y) coordinate" << endl;
	vector<Point*> original_points;
	for(int i = 0; i < 7; ++i){
		int x,y;
		cout << "(X,Y): ";
		cin >> x >> y;
		original_points.push_back(new Point(x,y));
	}
	for(Point *p : original_points){
		cout << "Point: " << *p << endl;
	}
	ofstream file("myadata.txt");
	for(Point *p : original_points){
		file << *p << endl;
	}
	file.close();

	ifstream ofile("myadata.txt");
	vector<Point*> processed_points;
	int x,y;
	while (ofile >> x >> y){
		processed_points.push_back(new Point(x,y));
	}

	if(processed_points.size() != original_points.size()){
		cerr << "Something went wrong!" << endl;
		return 0;
	}
	for(int i = 0; i < processed_points.size(); ++i){
		if(*processed_points[i] != *original_points[i]){
			cerr << "Something went wrong!" << endl;
			return 0;
		}
	}
	return 0;
}


