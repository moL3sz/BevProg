#include <iostream>
#include <set>


using namespace std;
class Token{
	public:
		char kind;
		double value;
		Token(char kind){
			this->kind = kind;
			this->value = 0;
		}
		Token(char kind, double value){
			this->kind = kind;
			this->value = value;

		}
};
Token get_token(){
	char ch;
	cin >> ch;

	set<char> v = {'+','-','*','%','/','(',')'};
	if(v.count(ch) != 0){
		return Token(ch);
	}
	if((int)ch >= 48 && (int)ch <= 57){
		cin.putback();
		double val = 0;
		cin >> val;
		return Token('8',val);
	}
	return Token("0","1");
}

double primary(){
	Token t = get_token();
	switch(t.kind){
		case '(':{
			double d = expression();
			t = get_token();
			if(t.kind != ')'){
				throw ") Expected";
			}
			return d;
		}
		case '8':
			return t.value;
		default:
			throw "Primary expected!";
	}
}



double term(){
	double left = primary();
	Token t = get_token();

	while(true){
		switch(t.kind){
			case '*':
				left *= primary();
				t = get_token();
				break;
			case '/':{
					double d = primary();
					if(d == 0){
						throw "Division error with 0";
					}
					left /=d;
					t = get_token();
					break;
				}		
			case '%':
				left %= primary();
				t = get_token();
				break;
			default:
				return left;
		}
	}
}



double expression(){
	double left = term();
	Token t = get_token();

	while(true){
		switch(t.kind){
			case '+':
				left += term();
				t = get_token();
				break;
			case '-':
				left -= term();
				t = get_token();
				break;
			default:
				return left;
		}
	}
}


int main(){
	try{
		while(cin){
			cout << expression() << endl;
		}
		return 0;
	}	
	catch(const char* msg){
		cout << msg << endl;
		return 1;
	}
	catch(...){
		cerr  << "exception" << endl;
		return 1;
	}
	return 0;
}

