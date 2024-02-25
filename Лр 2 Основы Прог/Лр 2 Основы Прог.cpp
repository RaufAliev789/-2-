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