#include <iostream>
using namespace std;


class Calculator {
public:
	int add(int x, int y) { return x + y; }

protected:  //��ӽÿ� ���������ڸ� private -> protected �� ����
	int sub(int x, int y) { return x - y; }

private:
	int mul(int x, int y) { return x * y; }

};

class MyCalculator : public Calculator {

	void access() {
		cout << add(10, 4) << endl;
		cout << sub(10, 4) << endl;
		//cout << mul(10, 4) < endl;   //private���� ���� �Ұ�
		cout << div(10, 4) << endl;
	};
};
