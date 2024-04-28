#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

void AddToVector(int ball, vector <int>& Vresult, int toAdd) {
	if (ball != 0) for (int i = 0; i < ball; i++) Vresult.push_back(toAdd);
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "");
	while (true) {
		vector <int> Vresult = {};
		double result = 0, ball;
		cout << "5: ";
		cin >> ball;
		AddToVector(ball, Vresult, 5);
		cout << "4: ";
		cin >> ball;
		AddToVector(ball, Vresult, 4);
		cout << "3: ";
		cin >> ball;
		AddToVector(ball, Vresult, 3);
		cout << "2: ";
		cin >> ball;
		AddToVector(ball, Vresult, 2);
		cout << "1: ";
		cin >> ball;
		AddToVector(ball, Vresult, 1);
		for (int i : Vresult) result += i;
		result /= Vresult.size();
		printf("%.2f", result);
		cout << "\nЗаново?[д/н]: ";
		char act;
		cin >> act;
		if (act == 'н') break;
	}
	system("pause");
	return 0;
}