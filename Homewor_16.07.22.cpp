#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	//������ 1_������� �����
	std::cout << "������ 1_������� �����\n";
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
	//������ 2_������� �����
	std::cout << "������ 2_������� �����\n";
	unsigned int A,B,C;
	std::cout << "������� ����� A\n";
	std::cin >> A;
	std::cout << "������� ����� B\n";
	std::cin >> B;
	C = A;
	for (int i = 1; i < B; i++){
		C = C * A;}//�������� ����������� � ���� ����� �� ��� ��� ���� ���������� ��������� 
	//�� ��������� �������� B 
	std::cout << C<<"\n\n";
	
	//������ 3_����� ��������� �����
	std::cout << "������ 3_����� ��������� �����\n";
	int N;
	int sum;
	std::cout << "������� ����� A=\t"<<"\n";
	std::cin >> N;
	std::cout << "������� B �����\n";
	sum = 0;
	for (int i = 0; i < N; i++)
		
	{std::cin>>B;
	sum += B;

	}
	std::cout << "��������� = " << sum;
	return 0;
}