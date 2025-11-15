#include <iostream>
#include "calc_main.h"


using namespace std;

void(*op[4])(History*, int, int) = { Add, Sub, Mul, Div };

int main() {

	History* history = new History();

	int menu = 0;
	int a, b = 0;
	cout << "==== 계산 프로그램 ====" << endl;
	cout << " 1. 덧셈 \n 2. 뺄셈 \n 3. 곱셈 \n 4. 나누기 \n 0. 종료" << endl;
	cout << "메뉴를 입력하세요: ";
	cin >> menu;

	cout << "연산할 첫번 째 수를 입력하세요 : ";
	cin >> a;

	cout << "연산할 두번 째 수를 입력하세요 : ";
	cin >> b;

	switch (menu)
	{
	case 1:
		op[0](history, a, b);
		break;
	case 2:
		Sub(history, a, b);
		break;
	case 3:
		Mul(history, a, b);
		break;
	case 4:
		Div(history, a, b);
		break;
	}
	cout << "연산 결과: " << history->result;

	

	return 0;
}