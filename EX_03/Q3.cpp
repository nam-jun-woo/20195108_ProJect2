/*
#include<iostream>

using namespace std;
int main() {
	int a, b;
	cout << "��� ������ �Է��մϱ�?";
	cin >> a;
	int* p = new int[a];
	for (int i = 0; i < a; i++) {
		cout << "������ �Է��Ͻÿ�";
		cin >> b;
		p[i] = b;
	}
	cout << "�Էµ� ������: ";
	for (int j = 0; j < a; j++) {
		cout << p[j] << ", ";
	}

}*/

/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int length;
	string b;
	cout << "�󸶳� ���� �̸��� �Է��Ͻðڽ��ϱ�?";
	cin >> length;

	string* names = new string[length];
	for (int i = 0; i < length; i++) {
		cout << "�̸��Է� # " << i + 1 << ": ";
		cin >> b;
		names[i] = b;
	}
	cout << endl;
	cout << "������ �̸� ����Դϴ�. " << endl;
	for (int j = 0; j < length; j++) {
		cout << "�̸��Է� # " << j + 1 << ": " << names[j] << endl;

	}
}*/
