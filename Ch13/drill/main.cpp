#include <iostream>
#include <stdexcept>
#include <map>
// 1 Define a global int array
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };


using namespace std;
map<int,int> mem;
void f(int ai[], int n)
{
    int la[10] = { };
    for (int i = 0; i < n; ++i) la[i] = ai[i];

    for (const auto& a : la)
        cout << a << ' ';
    cout << '\n';
    int* p = new int[n];
    for (int i = 0; i < n; ++i) p[i] = ai[i];
    cout << "Pointer to free store\n";
    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p;
}

int fac(int n) {
    if(mem.find(n) != mem.end()){
        return mem[n];
    }
    if (n == 1){
        return 1;
    }
    int d = n*fac(n-1);
    mem[n] =d; 
    return d;
}

int main()
try {
    // code
    cout << "Binary array\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);

    cout << "Factorial array\n";
    f(aa, 10);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}