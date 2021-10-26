#include <iostream>
using namespace std;

class Num {
	int a;
public:
	Num() {
		a = 1;
	}
	
	Num(int x) {
		a = x;
	} 

	void display() {
		cout << "A = " << a;
	}

	friend Num operator*(Num);
};

Num operator*(Num A) {
	Num result;
	result = 3 * A.a;
	return result;
}

int main()
{
	Num A(3), B;
	B = *A;
	B.display();
	return 0;
}