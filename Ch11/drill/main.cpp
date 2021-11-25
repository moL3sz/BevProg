#include <iostream>
#include <iomanip>    

using namespace std;
int main(){


    int birth_year = 2002;


    cout << "Decimal: " << birth_year << endl << hex
         << "Hexadecimal: " << birth_year << endl << oct
         << "Octal: " << birth_year << endl;
    
    int a,b,c,d;
    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
    cout << 1234.56789 << "\t\t(defaultfloat)\n" << fixed
         << 1234.56789 << "\t(fixed)\n" << scientific
         << 1234.56789 << "\t(scientific)\n";

    cout << '|' << setw(8) << "Kristof" << '|' << setw(8) << "Molnar" 
         << '|' << setw(32) << "moleszkf@gmail.com"
         << '|' << setw(20) << "+36 705566905" << "|\n"
         << '|' << setw(8) << "Adrian" << '|' << setw(8) << "Fekete"
         << '|' << setw(32) << "feketethebest@gmail.com"
         << '|' << setw(20) << "+36 304297843" << "|\n";

    return 0;   
}