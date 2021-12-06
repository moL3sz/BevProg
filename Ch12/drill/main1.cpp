#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << endl;
    return os;
}

int main()
try {

    int* arr1 = new int[20];
    int x = 100;
    for (int i = 0; i < 20; ++i) {
        arr1[i] = x;
        x++;
    }

    print_array(cout, arr1, 20);
    delete[] arr1;

    vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }
    print_vector(cout, v10);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}