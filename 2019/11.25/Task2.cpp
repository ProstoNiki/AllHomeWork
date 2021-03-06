//Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами.
//В комментариях напишите, почему перебор - эффективный
//Эффективность этого алгоритма состоит в том, что мы ,заметив определенную закономерность в зависимости количества палиндромов от количества цифр,
//высчитываем количество палиндромов по формуле.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m, count;
	cin >> n;
	if (n % 2 != 0){
		m = (n + 1) / 2;
		count = pow(10, m - 1) * 9;
		cout << count;
	}else{
		m = n / 2;
		count = pow(10, m - 1) * 9;
		cout << count;
		}
	return 0;
}

