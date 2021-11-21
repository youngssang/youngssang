#include <iostream>
using namespace std;


class Calculator {
public:
	int add(int x, int y) { return x + y; }

protected:  //상속시엔 접근지정자를 private -> protected 로 변경
	int sub(int x, int y) { return x - y; }

private:
	int mul(int x, int y) { return x * y; }

};

class MyCalculator : public Calculator {

	void access() {
		cout << add(10, 4) << endl;
		cout << sub(10, 4) << endl;
		//cout << mul(10, 4) < endl;   //private으로 접근 불가
		cout << div(10, 4) << endl;
	};
};
