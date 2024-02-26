/* Реализовать функцию вычисления
S(N, x)  x  N *int(S(N 1, x)) ,
S(0, x)  x 1 ,
Где операция int(...) означает
округление до наименьшего целого.
По заданным N,x.  Вход 2, 2 . Выход 2.  Вход 1.5, 3  . Выход 2.121

#include <iostream>

using namespace std;

double S_function(double N, double x) {
	if  (N == 0)
		return sqrt(x + 1);

	else if (N >0)
		return sqrt(x + N * int(S_function(N - 1, x)) );
}

int main() {
	setlocale(LC_ALL, "Ru");

	double N,  x, Res;
	

	cout << "Введите N: ";
	cin >>  N;

	cout << "Введите x: ";
	cin >>  x;

	Res = S_function(N, x);

	cout << "Результат работы программы: " << Res << endl;

	return 0;
}
