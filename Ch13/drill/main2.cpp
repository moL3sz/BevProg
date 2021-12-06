#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
using namespace std;

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

map<int,int> mem;
void f(vector<int> v)
{
    vector<int> lv(10);
    lv = v;
    for (auto& a : lv)
        cout << a << '\t';
    cout << '\n';

    vector<int> lv2 = v;
    for (auto& a : lv2)
        cout << a << '\t';
    cout << '\n';
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
    f(gv);

    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
        vv[i] = fac(i + 1);
    f(vv);
}
catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
}