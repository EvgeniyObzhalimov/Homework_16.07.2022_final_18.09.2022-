#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1_простые числа
	std::cout << "Задача 1_простые числа\n";
	int count;
	for (int i = 2; i <= 100; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				count++;}
		if (count <= 2) {
			std::cout << i << "\t"<<"\n";
		}
	}
	//Задача 2_степень числа
	std::cout << "Задача 2_степень числа\n";
	unsigned int A,B,C;
	std::cout << "Введите число A\n";
	std::cin >> A;
	std::cout << "Введите число B\n";
	std::cin >> B;
	C = A;
	for (int i = 1; i < B; i++){
		C = C * A;}//действие выполняется в теле цикла до тех пор пока количество иттераций 
	//не достигнет значения B 
	std::cout << C<<"\n\n";
	
	//Задача 3_сумма введенных чисел
	std::cout << "Задача 3_сумма введенных чисел\n";
	int N;
	int sum;
	std::cout << "Введите число A=\t"<<"\n";
	std::cin >> N;
	std::cout << "Введите B чисел\n";
	sum = 0;
	for (int i = 0; i < N; i++)
		
	{std::cin>>B;
	sum += B;

	}
	std::cout << "Результат = " << sum;
	return 0;
}